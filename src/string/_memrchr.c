#include "../../include/string.h"

void *_memrchr(const void *m, int c, size_t n)
{
	const char *s = m;
	c = (char)c;
	while (n--) if (s[n] == c) return (void *)(s + n);
	return 0;
}