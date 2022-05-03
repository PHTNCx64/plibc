/*
 * Project: plibc (PHTNC's Lib C)
 *
 * Author: PHTNC<>
 *
**/

#ifndef __PBASE_H__
#define __PBASE_H__

#ifdef _Restrict
#undef _Restrict
#endif // _Restrict

#if !defined (_Restrict) && defined(__cplusplus)
#if defined (__GNUC__)
#define _Restrict __restrict
#else
#define _Restrict
#endif

#else /* defined(__cplusplus) */
#define _Restrict restrict
#endif /* defined(__cplusplus) */

#endif // __PBASE_H__