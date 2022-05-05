#include "../../include/ctype.h"

int _isxdigit(int c)
{
	return _isxdigit(c) || ((unsigned)c | 32) - 'a' < 6;
}