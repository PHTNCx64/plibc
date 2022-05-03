#include "../../include/string.h"

size_t _strcspn(const char *s1, const char *s2)
{
	size_t ret = 0;
	while (*s1)
	{
		if (_strchr(s2, *s1)) { return ret; }
		else { s1++, ret++; }
	}
	return ret;
}