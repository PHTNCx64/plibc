#include "../../include/string.h"


void *_memchr(const void *src, int c, size_t n)
{
	const  char *s = src;
	char _c =  (char)c;

	for (; n && *s != _c; s++, n--);
	return n ? (void *)s : 0;
}