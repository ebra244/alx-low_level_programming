#include "main.h"
/**
 * _pow_recursion - Function that returns value of x raised to the power of y
 * @x: Base interger
 * @y: Exponent integer
 * Return: 1 On success
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, (y - 1)));
}
