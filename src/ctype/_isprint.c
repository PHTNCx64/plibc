#include "../../include/ctype.h"

int _isprint(int c)
{
	return (unsigned)c - 0x20 < 0x5F;
}