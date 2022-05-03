#include "../../include/stdio.h"

int fclose(int * fd)
{
#if defined (__PS3__) || defined (__CELLOS_LV2__)
	system_call_1(804, (uint64_t)*fd);
	return_to_user_prog(int);
#endif // __PS3__
}