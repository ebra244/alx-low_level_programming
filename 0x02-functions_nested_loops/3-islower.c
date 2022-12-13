#include "main.h"
/**
 * _islower - Function that checks for lowercase character
 * @c: if character c is parameter
 * Return: 1 (If c is lowercase)
 * Otherwise return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
