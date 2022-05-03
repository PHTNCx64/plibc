#include "../../include/string.h"

char *_strpbrk(const char *s, const char *b)
{
	s += _strcspn(s, b);
	return *s ? (char *)s : 0;
}