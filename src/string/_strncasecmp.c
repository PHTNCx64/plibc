#include "../../include/string.h"
#include "../../include/ctype.h"

int _strncasecmp(const char *_l, const char *_r, size_t n)
{
	const unsigned char *l = (void *)_l, *r = (void *)_r;
	if (!n--) return 0;
	for (; *l && *r && n && (*l == *r || _tolower(*l) == _tolower(*r)); l++, r++, n--);
	return _tolower(*l) - _tolower(*r);
}
