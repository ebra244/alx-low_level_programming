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

	va_start(va, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(va, int));
		if ((i < n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		va_end(va);
	}
	printf("\n");
}
