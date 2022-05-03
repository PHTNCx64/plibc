#include "../../include/string.h"

char *_strrchr(const char *s, int c)
{
	return _memrchr(s, c, _strlen(s) + 1);
}