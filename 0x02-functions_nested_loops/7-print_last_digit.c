#include "main.h"
/**
 * print_last_digit - function that prints last digit of a number
 * @n: Argument passed to the fun.
 * Return: Last digit of number
 */
int print_last_digit(int n)
{
	int m = n % 10;

	if (m < 0)
		m *= -1;
	_putchar(m + '0');
	return (m);
}
