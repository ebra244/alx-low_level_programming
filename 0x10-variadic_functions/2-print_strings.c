#include "variadic_functions.h"

/**
 * print_strings - Function that prints strings
 * @separator: The string to be printed between
 * @n: Number of strings to be passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list vap;

	va_start(vap, n);
	for (i = 0; i < n; i++)
	{
		char *str = va_arg(vap, char *);

		if (str == NULL)
			printf("(nil)");
		printf("%s", str);
		if ((i < n - 1) && separator != NULL)
			printf("%s", separator);
		va_end(vap);
	}
	printf("\n");
}
