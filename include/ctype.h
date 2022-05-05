/*
 * Project: plibc (PHTNC's Lib C)
 *
 * Author: PHTNC<>
 *
**/

#ifndef __PCTYPE_H__
#define __PCTYPE_H__

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

	int _isalnum(int);
	int _isalpha(int);
	int _isupper(int);
	int _islower(int);
	int _isdigit(int);
	int _isxdigit(int);
	int _iscntrl(int);
	int _isgraph(int);
	int _isspace(int);
	int _isblank(int);
	int _isprint(int);
	int _ispunct(int);

	int _tolower(int);
	int _toupper(int);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // __PCTYPE_H__