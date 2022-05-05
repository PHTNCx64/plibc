#include "../../include/ctype.h"

int _isspace(int c)
{
	return c == ' ' || (unsigned)c - '\t' < 5;
}