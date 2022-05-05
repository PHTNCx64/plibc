#include "../../include/ctype.h"

int _isdigit(int c)
{
	return (unsigned)c - '0' < 10;
}