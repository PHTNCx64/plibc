#include "../../include/stdio.h"
#include "../../include/string.h"

char* _gets(char* str)
{
#if defined (__PS3__) || defined (__CELLOS_LV2__)
	uint32_t len;
	system_call_4(402, 0, (uint64_t)(uint32_t)str, (uint64_t)(uint32_t)_strlen(str), (uint64_t)&len);
	return str;
#endif // __PS3__
}