#include "main.h"

/**
 * print_binary - Function that prints the binary representation
 * of a number
 * @n: Binary number
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	if (n > 1)
		print_binary(n / 2);
	_putchar(n % 2 + '0');
}
