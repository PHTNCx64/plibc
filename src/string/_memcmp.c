#include "../../include/string.h"

int _memcmp(const void *vl, const void *vr, size_t n)
{
	const char *l = (const char*)vl, *r = (const char*)vr;
	for (; n && *l == *r; n--, l++, r++);
	return n ? *l - *r : 0;
}