#include "../../include/string.h"

int _strncmp(const char *s1, const char *s2, size_t n)
{
	while ((n > 0) && *s1 && (*s1 == *s2)) { s1++, s2++, n--; } if (n == 0) return 0;
	return *(const unsigned char*)s1 - *(const unsigned char*)s2;
}