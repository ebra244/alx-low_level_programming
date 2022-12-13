#include "main.h"
/**
 * times_table - Function that prints the 9 times table
 */
void times_table(void)
{
	int n = 0;

	while (n <= 9)
	{
		int m = 0;

		while (m <= 9)
		{
			int p = m * n;

			_putchar(p + '0');
			_putchar(',');
			_putchar(' ');
			m++;
		}
		n++;
	}
}
