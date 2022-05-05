#include "../../include/ctype.h"

int _isgraph(int c)
{
	return (unsigned)c - 0x21 < 0x5E;
}