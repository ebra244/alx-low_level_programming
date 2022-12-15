#include "main.h"

/**
 * _isupper - Function that checks for uppercase
 * @c: Character to be checked
 * Return: 1 (if c is uppercase)
 * 0 oterwise
 */
int _isupper(int c)
{
	char c;

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
