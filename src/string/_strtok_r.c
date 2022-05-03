#include "../../include/string.h"

char *_strtok_r(char *_Restrict s, const char *_Restrict delim, char **_Restrict saveptr)
{
	char* end;
	if (!s) s = *saveptr;

	if (*s == '\0') { *saveptr = s; return NULL; }
	s += _strspn(s, delim);
	if (*s == '\0') { *saveptr = s; return NULL; }
	end = s + _strcspn(s, delim);
	if (*end == '\0') { *saveptr = end; return s; }
	*end = '\0';
	*saveptr = end + 1;
	return s;
}