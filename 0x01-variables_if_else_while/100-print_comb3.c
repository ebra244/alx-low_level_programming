#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * main - Program that prints all possible combination of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		int b = a + 1;

		while (b <= 9)
		{
			putchar(a + '0');
			putchar(b + '0');
			putchar(',');
			putchar(' ');
			b++;
		}
		a++;
	}
	return (0);
}
