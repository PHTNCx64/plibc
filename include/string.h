/*
 * Project: plibc (PHTNC's Lib C)
 *
 * Author: PHTNC<>
 *
**/

#ifndef __PSTRING_H__
#define __PSTRING_H__

#if defined (__PS3__) || defined (__CELLOS_LV2__)
 #ifndef _YVALS
  #include <yvals.h>
 #endif // _YVALS
#endif

#include "base.h"

#include <sys/types.h>

#ifndef NULL
 #define NULL 0
#endif // NULL

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

	int _memcmp(const void *, const void *, size_t);
	void *_memcpy(void *_Restrict, const void *_Restrict, size_t);
	void *_memcpy16(void *_Restrict, const void *_Restrict, size_t);
	void *_memset(void *, int, size_t);
	void *_memchr(const void *, int, size_t);
	void *_memrchr(const void *, int, size_t);
	// void *_memset_cs(void *, int, size_t);
	char *_strcat(char *_Restrict, const char *_Restrict);
	int _strcmp(const char *, const char *);
	char *_strcpy(char *_Restrict, const char *_Restrict);
	size_t _strlen(const char *);

	void *_memmove(void *, const void *, size_t);
	int _strcoll(const char *, const char *);
	size_t _strcspn(const char *, const char *);
	char *_strerror(int);
	char *_strncat(char *_Restrict, const char *_Restrict, size_t);
	int _strncmp(const char *, const char *, size_t);
	char *_strncpy(char *_Restrict, const char *_Restrict, size_t);
	// char *_strncpy_cs(char *_Restrict, const char *_Restrict, size_t);
	size_t _strspn(const char *, const char *);
	char *_strtok(char *_Restrict, const char *_Restrict);
	size_t _strxfrm(char *_Restrict, const char *_Restrict, size_t);
	char *_strdup(const char *);
	int _strcasecmp(const char *, const char *);
	int _strncasecmp(const char *, const char *, size_t);
	char *_strtok_r(char *_Restrict, const char *_Restrict, char **_Restrict);
	char *_strchr(const char *, int);
	char *_strpbrk(const char *, const char *);
	char *_strrchr(const char *, int);
	char *_strstr(const char *, const char *);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // __PSTRING_H__