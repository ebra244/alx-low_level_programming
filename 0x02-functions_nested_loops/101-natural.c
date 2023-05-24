#include <stdio.h>
/**
 * main - Function that prints the sum of natural numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;
	long sum = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
		i++;
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
