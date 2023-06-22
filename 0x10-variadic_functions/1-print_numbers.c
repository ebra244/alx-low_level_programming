#include "variadic_functions.h"

/**
 * print_numbers - Function that prints numbers
 * @separator: The string to be printed between numbers
 * @n: Number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list va;

	if (separator == NULL)
		separator = "";
	va_start(va, n);
	for (i = 0; i < n; i++)
	{
		if (i < (n - 1))
			printf("%d%s", va_arg(va, int), separator);
		else
		{
			printf("%d\n", va_arg(va, int));
		}
		va_end(va);
	}
}
