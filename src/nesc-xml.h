/* This file is part of the nesC compiler.
   Copyright (C) 2002 Intel Corporation

The attached "nesC" software is provided to you under the terms and
conditions of the GNU General Public License Version 2 as published by the
Free Software Foundation.

nesC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with nesC; see the file COPYING.  If not, write to
the Free Software Foundation, 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.  */
#ifndef NESC_XML_H
#define NESC_XML_H

#include "parser.h"
#include "nesc-xml.h"

/* Low-level text output functions */
void xindent(void);
void xunindent(void);
void xnewline(void);
void xstartline(void);
void xstartline_noindent(void);
void xvprintf(char *format, va_list args);
void xprintf(char *format, ...);
void xqputs(const char *s);
void xwqputs(const wchar_t *s);
void xputs(const char *s);

/* Tag/attribute handling */
void xml_tag_start(const char *tag);
void xml_tag(const char *tag);
void xml_tag_end(void);
void xml_qtag(const char *tag);
void xml_tag_end_pop(void);
void xml_pop(void);
void xml_attr(const char *name, const char *val);
void xml_attr_int(const char *name, largest_int val);
void xml_attr_ptr(const char *name, void *val);
void xml_attr_noval(const char *name);
void xml_attr_bool(const char *name, bool val);
void xml_attr_cval(const char *name, cval val);
void xml_start(FILE *f);
void xml_end(void);

/* Convenient shortcuts */
void indentedtag_start(const char *name);
void indentedtag(const char *name);
void indentedtag_pop(void);

/* Standard nesC xml elements */
void nxml_ddecl_ref(data_declaration ddecl);
void nxml_tdecl_ref(tag_declaration tdecl);
void nxml_ndefinition_ref(nesc_declaration ndecl, dhash_table defs,
			  dhash_table tags);
void nxml_ninstance_ref(nesc_declaration ndecl);

#endif