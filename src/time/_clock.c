#include "../../include/time.h"

int64_t _time(int64_t* val)
{
	int64_t tmp = 0;
	system_call_1(119, (uint64_t)tmp);
	*val = tmp;
	return_to_user_prog(int64_t);
}