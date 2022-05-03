#include "../../include/string.h"

char *_strtok(char *_Restrict str, const char *_Restrict delim)
{
	static char* p = 0;
	if (str) p = str;
	else if (!p) return 0;

	str = p + _strspn(p, delim);
	p = str + _strcspn(str, delim);

	if (p == str) return p = 0;

	p = *p ? *p = 0, p + 1 : 0;
	return str;
}