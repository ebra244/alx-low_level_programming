#include "main.h"
/**
 * print_line - Function that draws straight line
 * @n: Charcter to draw aline
 */

void print_line(int n)
{
	int i = 0;

	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
