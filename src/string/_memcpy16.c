#include "../../include/string.h"
#include <wchar.h>

// I assume it's for wchar_t ?
void *_memcpy16(void *_Restrict dst, const void *_Restrict src, size_t n)
{
	wchar_t* d = (wchar_t*)dst;
	const wchar_t* s = (const wchar_t*)src;

	for (; n; n--) *d++ = *s++;
	return dst;
}