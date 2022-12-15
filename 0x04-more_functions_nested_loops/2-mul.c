#include "main.h"
/**
 * mul - Function that multiplies two integers
 * @a: The first nuber
 * @b: the second number
 * Return: 1 (If two of them are non zero)
 * 0 if two of them or one of them are zero
 */
int mul(int a, int b)
{
	if (a != 0 && b != 0)
	{
		return (a * b);
	}
	else
	{
		return (0);
	}
}
