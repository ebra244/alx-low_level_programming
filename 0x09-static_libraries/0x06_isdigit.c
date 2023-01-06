#include "main.h"
/**
 * _isdigit - Function that checks for digit
 * @c: Character to be checked
 * return: 1 On success
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
