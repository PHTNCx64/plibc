#include "../../include/string.h"

char *_strstr(const char *s1, const char *s2)
{
	if (!s1) return 0;
	size_t n = _strlen(s2); if (n == 0) return 0;
	while (*s1)
	if (!_memcmp(s1++, s2, n))
		return (char*)(s1 - 1);
	return 0;
}