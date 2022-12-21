#include "stdio.h"
/**
 * reverse_array - Function that reverses the content of an array
 * @a: Array to be reversed
 * @n: Number of elements of arrray
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = n - 1; i >= n / 2; i--)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}
