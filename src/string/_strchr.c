#include "../../include/string.h"

char *_strchr(const char *s, int c)
{
	if (!s) return 0;
	while (*s != (char)c)
	if (!*s++) return 0;
	return (char *)s;
}