#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that prints all possible combination of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = '0';

	while (n <= 9)
	{
		int m = '0';

		while (m <= 9)
		{
			putchar(n + '0');
			putchar(m + '0');
			if (n < 9)
			{
				putchar(',');
				putchar(' ');
			}
			m++;

		}
		n++;
	}
	putchar('\n');
	return (0);
}
