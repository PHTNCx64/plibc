#include "../../include/string.h"

void *_memcpy(void *_Restrict dst, const void *_Restrict src, size_t n)
{
	char* d = (char*)dst;
	const char* s = (const char*)src;

	for (; n; n--) *d++ = *s++;
	return dst;
}