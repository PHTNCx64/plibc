#include "../../include/string.h"

void *_memmove(void *dst, const void *src, size_t n)
{
	char* d = (char*)dst;
	const char* s = (const char*)src;
	if (d == s) return d;
	if ((uintptr_t)s - (uintptr_t)d - n <= -2 * n) return _memcpy(d, s, n);
	if (d < s) while (n) n--, d[n] = s[n];
	return dst;
}