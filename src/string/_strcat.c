#include "../../include/string.h"

char *_strcat(char *_Restrict dst, const char *_Restrict src)
{
	_strcpy(dst + _strlen(src), src);
	return dst;
}