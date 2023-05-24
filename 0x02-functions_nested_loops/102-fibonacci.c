#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (success)
 */
int main(void)
{
	long int i = 1, j = 2, m = 2, n;

	printf("%ld, %ld", i, j);

	while (m < 50)
	{
		n = i + j;
		printf(", %ld", n);
		i = j;
		j = n;
		m++;
	}
	printf("\n");
	return (0);
}
