#include "../../include/ctype.h"

int _tolower(int c)
{
	if (_isupper(c)) return c | 32;
	return c;
}