#include "../../include/string.h"

char *_strcpy(char *_Restrict dst, const char *_Restrict src)
{
	char* ret = dst;
	while ((*dst++ = *src++));
	return ret;
}