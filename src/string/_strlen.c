#include "../../include/string.h"

size_t _strlen(const char *str)
{
	size_t i = 0;
	while (str[i]) i++;
	return i;
}