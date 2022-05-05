#ifndef __PMALLOC_H__
#define __PMALLOC_H__

#include <sys/syscall.h>

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

	void* _malloc(size_t);
	void free(void*);

#ifdef __cplusplus

#endif // __cplusplus

#endif // __PMALLOC_H__