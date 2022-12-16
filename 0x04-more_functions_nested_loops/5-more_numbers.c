#include "main.h"
/**
 * more_numbers - Function that prints ten the numbers from 0 t0 14
 */
void more_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		int m = 0;

		while (m <= 14)
		{
			_putchar(m + '0');
			m++;
		}
		_putchar('\n');
		n++;
	}
	_putchar('\n');
}
