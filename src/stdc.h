/* stdc.h -- Macros to make source compile on both ANSI C and K&R C
   compilers.  */

/* Copyright (C) 1993-1999 Free Software Foundation, Inc.

   This file is part of GNU Bash, the Bourne Again SHell.

   Bash is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 1, or (at your option)
   any later version.

   Bash is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License
   along with Bash; see the file COPYING.  If not, write to the Free
   Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA. */

/* $Id: stdc.h,v 1.4 1999/01/16 22:37:24 tudor Exp $ */

#if !defined (__STDC_H__)
#define __STDC_H__

/* Adapted from BSD /usr/include/sys/cdefs.h. */

/* A function can be defined using prototypes and compile on both ANSI C
   and traditional C compilers with something like this:
	extern char *func PROTO ((char *, char *, int)); */
#if defined (__STDC__)

#  if !defined (NULL)
#    define NULL ((void *)0)
#  endif

#  if !defined (PROTO)
#    define PROTO(protos) protos
#  endif

#  if !defined (__GNUC__)
#    define inline
#  endif

#else /* ! __STDC__ */

#  if !defined (NULL)
#    define NULL 0x0
#  endif

#  if !defined (PROTO)
#    define PROTO(protos) ()
#  endif

#endif /* ! __STDC__ */


#ifdef HAVE_DUMB_CC
#undef PROTO
#define PROTO(protos) ()
#endif


#endif /* !__STDC_H__ */
