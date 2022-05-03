#include "../../include/ctype.h"

int _isupper(int c)
{
	return (unsigned)c - 'A' < 26;
}