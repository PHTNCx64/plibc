#include "../../include/ctype.h"

int _isalnum(int c)
{
	return _isalpha(c) || _isdigit(c);
}