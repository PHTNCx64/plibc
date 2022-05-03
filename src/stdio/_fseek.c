#include "../../include/stdio.h"

#include <sys/fs.h>

int fseek(int *fd, long offset, int whence)
{
#if defined (__PS3__) || defined (__CELLOS_LV2__)
	uint64_t fpos;
	system_call_4(818, (uint64_t)*fd, (uint64_t)offset, (uint64_t)whence, (uint64_t)fpos);
	return_to_user_prog(int);
#endif // __PS3__
}