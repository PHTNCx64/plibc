#include "../../include/stdio.h"

int _rename(const char *from, const char *to)
{
#if defined (__PS3__) || defined (__CELLOS_LV2__)
	system_call_2(812, (uint64_t)(uint32_t)from, (uint64_t)(uint32_t)to);
	return_to_user_prog(int);
#endif // __PS3__
}