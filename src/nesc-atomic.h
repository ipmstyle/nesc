/* This file is part of the nesC compiler.
   Copyright (C) 2006 Intel Corporation

The attached "nesC" software is provided to you under the terms and
conditions of the GNU General Public License Version 2 as published by the
Free Software Foundation.

nesC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with nesC; see the file COPYING.  If not, write to
the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor,
Boston, MA 02110-1301 USA. */

#ifndef NESC_ATOMIC_H
#define NESC_ATOMIC_H

/* atomic_t is defined in AST.h */

void isatomic(cgraph callgraph);
void init_isatomic(void);

#endif
