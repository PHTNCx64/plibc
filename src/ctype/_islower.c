#include "../../include/ctype.h"

int _islower(int c)
{
	return (unsigned)c - 'a' < 26;
}