#include "../../include/string.h"
#include <stddef.h>
#include <errno.h>

char* _strerror(int e)
{
	/* To be implemented, am lazy. */
	switch (e)
	{
	case EBADF: return "Bad file descriptor";
	case EAGAIN: return "Resource temporarily unavailable";
	case ENOENT:  return "No such file or directory";
	default: return 0;
	}
}