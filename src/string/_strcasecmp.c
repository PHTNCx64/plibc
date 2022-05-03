#include "../../include/string.h"

int _strcasecmp(const char* s1, const char* s2)
{
	int c1, c2;
	while (*s1)
	{
		c1 = *((char *)(s1++)); if (c1 >= 'A' && c1 <= 'Z') c1 += 0x20; // ('a' - 'A')
		c2 = *((char *)(s2++)); if (c2 >= 'A' && c2 <= 'Z') c2 += 0x20; // ('a' - 'A')
		if (c1 != c2)   return (c1 - c2);
	}
	return 0;
}