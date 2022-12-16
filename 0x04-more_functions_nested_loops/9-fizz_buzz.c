#include "main.h"
/**
 * print_fizz_buzz - Program that prints numbers from 1 to 100
 */
void print_fizz_buzz(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			_putchar(70);
			_putchar(105);
			_putchar(122);
			_putchar(122);
			_putchar(66);
			_putchar(117);
			_putchar(122);
			_putchar(122);
			_putchar(32);
		}
		else if (i % 3 == 0 && i % 5 != 0)
		{
			_putchar(70);
			_putchar(105);
			_putchar(122);
			_putchar(122);
			_putchar(32);
		}
		else if (i % 3 != 0 && i % 5 == 0)
		{
			_putchar(66);
			_putchar(117);
			_putchar(122);
			_putchar(122);
			_putchar(32);
		}
		else
			_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}

