#include "../../include/stdio.h"

int _puts(const char* str)
{
#if defined (__PS3__) || defined (__CELLOS_LV2__)
	uint32_t len;
	system_call_4(403, 0ULL, (uint64_t)(uint32_t)str, _strlen(str), (uint64_t)&len);
	return_to_user_prog(int);
#endif // __PS3__
}