#include "../../include/ctype.h"

int _ispunct(int c)
{
	return _isgraph(c) && !_isalnum(c);
}