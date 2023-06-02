#include "main.h"

/**
 * print_line - Function that draws a straight line
 * @n: Number of times the character printed
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
