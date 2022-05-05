#include "../../include/ctype.h"

int _isalpha(int c)
{
	return ((unsigned)c | 32) - 'a' < 26;
}