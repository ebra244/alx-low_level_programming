#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (success)
 */
int main(void)
{
	long int i = 1, j = 2, n = 0, e, s = 2;

	while (n < 50)
	{
		e = i + j;
		if (e % 2 == 0 && e <= 4000000)
		{
			s += e;
		}
		i = j;
		j = e;
		n++;
	}
	printf("%ld\n", s);
	return (0);
}
