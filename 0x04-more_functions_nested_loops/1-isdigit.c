#include <main.h>
/**
 * _isdigit - Function that checks for digit
 * @c: Character to be checked
 * Return: 1 (if successed)
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
