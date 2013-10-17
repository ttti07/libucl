/* Copyright (c) 2013, Vsevolod Stakhov
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *       * Redistributions of source code must retain the above copyright
 *         notice, this list of conditions and the following disclaimer.
 *       * Redistributions in binary form must reproduce the above copyright
 *         notice, this list of conditions and the following disclaimer in the
 *         documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED ''AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL AUTHOR BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <stdio.h>
#include <errno.h>
#include "ucl.h"

int
main (int argc, char **argv)
{
	char inbuf[8192];
	struct ucl_parser *parser, *parser2;
	ucl_object_t *obj;
	FILE *in, *out;
	UT_string *err = NULL;
	unsigned char *emitted;
	const char *fname_in = NULL, *fname_out = NULL;
	int ret = 0;

	switch (argc) {
	case 2:
		fname_in = argv[1];
		break;
	case 3:
		fname_in = argv[1];
		fname_out = argv[2];
		break;
	}

	if (fname_in != NULL) {
		in = fopen (fname_in, "r");
		if (in == NULL) {
			exit (-errno);
		}
	}
	else {
		in = stdin;
	}
	parser = ucl_parser_new (UCL_FLAG_KEY_LOWERCASE);

	while (!feof (in)) {
		fread (inbuf, sizeof (inbuf), 1, in);
		ucl_parser_add_chunk (parser, inbuf, strlen (inbuf), &err);
	}
	fclose (in);

	if (fname_out != NULL) {
		out = fopen (fname_out, "w");
		if (out == NULL) {
			exit (-errno);
		}
	}
	else {
		out = stdout;
	}
	if (err != NULL) {
		fprintf (out, "Error occured: %s\n", err->d);
		ret = 1;
		goto end;
	}
	obj = ucl_parser_get_object (parser, &err);
	emitted = ucl_object_emit (obj, UCL_EMIT_CONFIG);
	ucl_parser_free (parser);
	ucl_obj_unref (obj);
	parser2 = ucl_parser_new (UCL_FLAG_KEY_LOWERCASE);
	ucl_parser_add_chunk (parser2, emitted, strlen (emitted), &err);

	if (err != NULL) {
		fprintf (out, "Error occured: %s\n", err->d);
		fprintf (out, "%s\n", emitted);
		ret = 1;
		goto end;
	}
	if (emitted != NULL) {
		free (emitted);
	}
	obj = ucl_parser_get_object (parser2, &err);
	emitted = ucl_object_emit (obj, UCL_EMIT_CONFIG);

	fprintf (out, "%s\n", emitted);
	ucl_obj_unref (obj);

end:
	if (emitted != NULL) {
		free (emitted);
	}
	if (parser2 != NULL) {
		ucl_parser_free (parser2);
	}
	fclose (out);

	return ret;
}
