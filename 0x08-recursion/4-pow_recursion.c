#include "main.h"

/**
 * _pow_recursion - Function that returns the power of a number
 * @x: Number to be printed its power
 * @y: Power of the number
 * Return: Always -1 if power is negative
 * 0 if number is 0
 * positive if power is non negative
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
