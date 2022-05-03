#include "../../include/string.h"

int _strcmp(const char *s1, const char *s2)
{
	for (; *s1 == *s2 && *s1; s1++, s2++);
	return *(char *)s1 - *(char *)s2;
}