#include "variadic_functions.h"

/**
 * sum_them_all - Function that returns the sum of its parameters
 * @n: Number of parameters to be passed
 * Return: The sum if success
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list va;

	if (n == 0)
		return (0);
	va_start(va, n);
	for (i = 0; i < n; i++)
		sum += va_arg(va, int);
	va_end(va);
	return (sum);
}
