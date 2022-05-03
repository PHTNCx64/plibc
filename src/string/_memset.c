#include "../../include/string.h"

void *_memset(void *dst, int c, size_t n)
{
	char* d = (char*)dst;
	char _c = (char)c;

	for (; n; n--) *d++ = _c;
	return dst;
}