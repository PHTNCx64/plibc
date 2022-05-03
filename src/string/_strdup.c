#include "../../include/string.h"
#include <stdlib.h>

char* _strdup(const char* s)
{
	/*
	size_t l = _strlen(s);
	char* d = (char*)malloc(l + 1); // apparently you can use stdlib functions in static libraries, might need some testing.
	if (!d) return NULL;
	return _memcpy(d, s, l + 1);
	*/

	return (char*)(void*)0;
}