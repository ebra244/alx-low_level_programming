#include "main.h"
/**
 * print_line - Function that draws straight line
 * @n: Charcter to draw aline
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i = 1;

		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
