#include "../../include/string.h"

char *_strncpy(char *_Restrict dst, const char *_Restrict src, size_t n)
{
	char *ret = dst;
	do
	{
		if (!n--) return ret;
	} while ((*dst++ = *src++));
	while (n--) *dst++ = 0;
	return ret;
}