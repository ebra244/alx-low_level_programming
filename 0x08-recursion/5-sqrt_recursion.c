#include "main.h"
int _sqrt(int n, int i);
/**
 * _sqrt_recursion - Function that returns natural square root of a number
 * @n: Number whose square root will be returned
 * Return: 1 On success
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	else if (square == n)
		return (i);
	else
		return (_sqrt(n, (i + 1)));
}
