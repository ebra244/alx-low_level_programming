#include "main.h"
/**
 * print_number - Function that prints an integer
 * @n: Integer to be printed
 */
void print_number(int n)
{
	if (n / 10 != 0)
	{
		print_number(n / 10);
		if (n > 0)
		{
			_putchar(n % 10 + '0');
		}
		else
		{
			_putchar(-n % 10 + '0');
		}
	}
	else if ((n / 10 == 0) && (n % 10 != 0) && (n > 0))
			{
			_putchar(n % 10 + '0');
			}
			else if ((n / 10 == 0) && (n % 10 != 0) && (n <= 0))
			{
			_putchar('-');
			_putchar(-n % 10 + '0');
			}
			}
