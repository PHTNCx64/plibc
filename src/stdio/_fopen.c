#include "../../include/stdio.h"

int *_fopen(const char *_Restrict path, const char *_Restrict mode)
{
	int _mode = 0;
	if (mode == "r") _mode = 000000;
	else if (mode == "w") _mode = 000001;
	else if (mode == "a") _mode = 002000;
	else if (mode == "r+")
	{

	}
	else if (mode == "w+")
	{
		
	}
	else if (mode == "a+")
	{

	}

	return 0;
}