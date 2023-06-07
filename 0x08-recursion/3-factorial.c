#include "main.h"

/**
 * factorial - Function that returns factorial of the given number
 * @n: Number to be printed its factorial
 * Return: Always -1 if not success
 * Not negative  number if success
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (1);
	else
		return (n * factorial(n - 1));
}
