#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: number of lines.
 * Return: no return
 */
void print_triangle(int size)
{
	int i = 0;

	while (i < size)
	{
		int j = 1;

		while (j < (size - i))
		{
			_putchar(' ');
		}
		j--;
		while (j < size)
		{
			_putchar(35);
			j++;
		}
		if (i < (size - 1))
			_putchar('\n');
		i++;
	}
	_putchar('\n');
}
