#include "main.h"

int _sqrt(int n, int i);
/**
 * _sqrt_recursion - Function that returns the square root of n
 * @n: Number to be printed its square root
 * Return: Always -1 if not success
 * The square root of the number if success
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - Functions that returns the square root of a number
 * @n: Number to be returned its square root
 * @i: The square root of n
 * Return: Always -1 if not success
 * i if success
 */
int _sqrt(int n, int i)
{
	int sqrt;

	sqrt = i * i;
	if (sqrt > n)
		return (-1);
	else if (sqrt == n)
		return (i);
	else
		return (_sqrt(n, i + 1));
}
