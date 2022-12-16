#include "main.h"
/**
 * print_diagonal - A function that draws a diagonal line
 * @n: Number of character to be inputed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 1;

		while (i <= n)
		{
			_putchar(92);
			i++;
			_putchar('\n');
			_putchar(32);
			}
		_putchar('\n');
	}
}
