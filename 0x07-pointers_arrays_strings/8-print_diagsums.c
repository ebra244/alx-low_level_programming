#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Function that prints the sum of two diagonals
 * @a: Pointer to array of integers
 * @size: Number of integers
 */
void print_diagsums(int *a, int size)
{
	int i, j = 0, sum1 = 0, sum2 = 0;

	j = (size * size) - 1;
	for (i = 0; i <= j; i += (size + 1))
	{
		sum1 += a[i];
	}
	for (i = (size - 1); i < j; i += (size - 1))
	{
		sum2 += a[i];
	}
	printf("%d,%d\n", sum1, sum2);
}
