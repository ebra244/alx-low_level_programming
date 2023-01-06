#include "main.h"
/**
 * _is_lower - Function that checks for lower case
 * @c: Charcter to be checked
 * Return: 1 On success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
