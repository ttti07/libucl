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

#ifndef UCL_CHARTABLE_H_
#define UCL_CHARTABLE_H_

#include "ucl_internal.h"

static const unsigned char ucl_chartable[255] = {
UCL_CHARACTER_VALUE_END, UCL_CHARACTER_DENIED, UCL_CHARACTER_DENIED,
UCL_CHARACTER_DENIED, UCL_CHARACTER_DENIED, UCL_CHARACTER_DENIED,
UCL_CHARACTER_DENIED, UCL_CHARACTER_DENIED, UCL_CHARACTER_DENIED,
UCL_CHARACTER_WHITESPACE, UCL_CHARACTER_WHITESPACE|UCL_CHARACTER_VALUE_END,
UCL_CHARACTER_WHITESPACE, UCL_CHARACTER_WHITESPACE,
UCL_CHARACTER_WHITESPACE|UCL_CHARACTER_VALUE_END, UCL_CHARACTER_DENIED,
UCL_CHARACTER_DENIED, UCL_CHARACTER_DENIED, UCL_CHARACTER_DENIED,
UCL_CHARACTER_DENIED, UCL_CHARACTER_DENIED, UCL_CHARACTER_DENIED,
UCL_CHARACTER_DENIED, UCL_CHARACTER_DENIED, UCL_CHARACTER_DENIED,
UCL_CHARACTER_DENIED, UCL_CHARACTER_DENIED, UCL_CHARACTER_DENIED,
UCL_CHARACTER_DENIED, UCL_CHARACTER_DENIED, UCL_CHARACTER_DENIED,
UCL_CHARACTER_DENIED, UCL_CHARACTER_DENIED,
UCL_CHARACTER_WHITESPACE|UCL_CHARACTER_VALUE_STR /*   */,
UCL_CHARACTER_VALUE_STR /* ! */, UCL_CHARACTER_VALUE_STR /* " */,
UCL_CHARACTER_VALUE_END /* # */, UCL_CHARACTER_VALUE_STR /* $ */,
UCL_CHARACTER_VALUE_STR /* % */, UCL_CHARACTER_VALUE_STR /* & */,
UCL_CHARACTER_VALUE_STR /* ' */, UCL_CHARACTER_VALUE_STR /* ( */,
UCL_CHARACTER_VALUE_STR /* ) */, UCL_CHARACTER_VALUE_STR /* * */,
UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* + */,
UCL_CHARACTER_VALUE_STR /* , */,
UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT_START|UCL_CHARACTER_VALUE_DIGIT /* - */,
UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* . */,
UCL_CHARACTER_VALUE_STR /* / */,
UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT_START|UCL_CHARACTER_VALUE_DIGIT /* 0 */,
UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT_START|UCL_CHARACTER_VALUE_DIGIT /* 1 */,
UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT_START|UCL_CHARACTER_VALUE_DIGIT /* 2 */,
UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT_START|UCL_CHARACTER_VALUE_DIGIT /* 3 */,
UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT_START|UCL_CHARACTER_VALUE_DIGIT /* 4 */,
UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT_START|UCL_CHARACTER_VALUE_DIGIT /* 5 */,
UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT_START|UCL_CHARACTER_VALUE_DIGIT /* 6 */,
UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT_START|UCL_CHARACTER_VALUE_DIGIT /* 7 */,
UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT_START|UCL_CHARACTER_VALUE_DIGIT /* 8 */,
UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT_START|UCL_CHARACTER_VALUE_DIGIT /* 9 */,
UCL_CHARACTER_VALUE_STR /* : */, UCL_CHARACTER_VALUE_END /* ; */,
UCL_CHARACTER_VALUE_STR /* < */, UCL_CHARACTER_VALUE_STR /* = */,
UCL_CHARACTER_VALUE_STR /* > */, UCL_CHARACTER_VALUE_STR /* ? */,
UCL_CHARACTER_VALUE_STR /* @ */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* A */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* B */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* C */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* D */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* E */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* F */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* G */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* H */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* I */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* J */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* K */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* L */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* M */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* N */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* O */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* P */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* Q */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* R */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* S */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* T */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* U */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* V */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* W */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* X */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* Y */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* Z */,
UCL_CHARACTER_VALUE_END /* [ */, UCL_CHARACTER_VALUE_STR /* \ */,
UCL_CHARACTER_VALUE_STR /* ] */, UCL_CHARACTER_VALUE_STR /* ^ */,
UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR /* _ */,
UCL_CHARACTER_VALUE_STR /* ` */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* a */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* b */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* c */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* d */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* e */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* f */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* g */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* h */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* i */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* j */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* k */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* l */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* m */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* n */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* o */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* p */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* q */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* r */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* s */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* t */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* u */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* v */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* w */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* x */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* y */,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR|UCL_CHARACTER_VALUE_DIGIT /* z */,
UCL_CHARACTER_VALUE_END /* { */, UCL_CHARACTER_VALUE_STR /* | */,
UCL_CHARACTER_VALUE_STR /* } */, UCL_CHARACTER_VALUE_STR /* ~ */,
UCL_CHARACTER_DENIED,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR,
UCL_CHARACTER_KEY_START|UCL_CHARACTER_KEY|UCL_CHARACTER_VALUE_STR
};



#endif /* UCL_CHARTABLE_H_ */
