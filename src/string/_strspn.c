#include "../../include/string.h"

size_t _strspn(const char *s1, const char *s2)
{
	size_t ret = 0;
	while (*s1 && _strchr(s2, *s1++))
		ret++;
	return ret;
}