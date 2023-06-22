#include "variadic_functions.h"

/**
 * print_all - Function that prints anything
 * @format: Type to be printed
 */
void print_all(const char * const format, ...)
{
	va_list vap;
	char *str, c;
	int i = 0, j = 0;

	va_start(vap, format);
	while (format && format[i])
	{
		c = format[i + 1];
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(vap, int));
				j = 1;
				break;
			case 'i':
				printf("%i", va_arg(vap, int));
				j = 1;
				break;
			case 'f':
				printf("%f", va_arg(vap, double));
				j = 1;
				break;
			case 's':
				str = va_arg(vap, char *);
				j = 1;
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				j = 1;
				break;
		}
		if (j > 0 && (c == 'c' || c == 'i' || c == 'f' || c == 's'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(vap);

}
