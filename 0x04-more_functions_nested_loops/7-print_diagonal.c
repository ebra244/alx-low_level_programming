#include "main.h"
/**
 * print_diagonal - A function that draws a diagonal line
 * @n: Number of character to be inputed
 */
void print_diagonal(int n)
{
	int i = 0;

	while (i < n)
	{
		int j = 0;

		while (j < i)
		{
			_putchar(' ');
			j++;
			}
		_putchar(92);
		if (i < (n - 1))
			_putchar('\n');
		i++;
	}
	_putchar('\n');
}
