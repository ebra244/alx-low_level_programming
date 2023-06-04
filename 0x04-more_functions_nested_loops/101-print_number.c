#include "main.h"

/**
 * print_number - Function that prints an integer
 * @n: Integer to be printed
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (i / 10 > 0)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');

}
