#include "main.h"
/**
 * print_square - Function that prints a square
 * @size: Character to be inputed
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 0;

		while (i < size)
		{
			int j = 0;

			while (j < size)
			{
				_putchar(35);
				j++;
			}
			i++;
		}
		_putchar('\n');
	}

}
