#include "main.h"
/**
 * print_numbers - Fnction that prints numbers
 * Return: 0 (success)
 */
void print_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
