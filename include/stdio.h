/*
 * Project: plibc (PHTNC's Lib C)
 *
 * Author: PHTNC<>
 *
**/

#ifndef __PSTDIO_H__
#define __PSTDIO_H__


#if defined (__PS3__) || defined (__CELLOS_LV2__)

#include <sys/syscall.h>
#ifndef _YVALS
#include <yvals.h>
#endif /* _YVALS */

	// Yes I know FILE is a structure, but I'm using this as a stub rn. The syscalls return CellFsErrno,
	// it's a signed integer.
	typedef signed int _FILE;
	

#endif // __PS3__

#ifdef __cplusplus
	extern "C" {
#endif // __cplusplus
	int _fclose(int *);
	char *_fgets(char *_Restrict, int, int *_Restrict);
	int *_fopen(const char *_Restrict, const char *_Restrict);
	int _fseek(int *, long, int);
	int _puts(const char *);
	int _rename(const char *S, const char *);


#ifdef __cplusplus
}
#endif // __cplusplus

#endif // __PSTDIO_H__