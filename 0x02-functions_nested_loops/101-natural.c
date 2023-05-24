#include <stdio.h>
/**
 * print_natural - Function that prints the sum of natural numbers
 * Return: Always 0 (success)
 */
void print_natural(void)
{
	int i = 0;
	long sum = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5))
			sum += i;
		i++;
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
