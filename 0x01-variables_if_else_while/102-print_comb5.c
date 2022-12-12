#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that prints all possible combination of two digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = '0';

	while (a <= 9)
	{
		int b = '0';
		while (b <= 9)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (a < 9)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
