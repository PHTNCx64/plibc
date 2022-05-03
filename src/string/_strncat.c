#include "../../include/string.h"

char *_strncat(char *_Restrict dst, const char *_Restrict src, size_t n)
{
	char *a = dst;
	dst += _strlen(dst);
	while (n && *src) n--, *dst++ = *src++;
	*dst++ = 0;
	return a;
}