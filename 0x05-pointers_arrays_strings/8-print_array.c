#include "main.h"
#include <stdio.h>
/**
 * print_array - Function that prints n elements of an array
 * @a: Array to be printed its elements
 * @n: number of elements to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("a[n]: %d", a[n]);
		if (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
} 
