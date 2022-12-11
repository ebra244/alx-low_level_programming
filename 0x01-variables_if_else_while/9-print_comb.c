#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - Program that prints all possible combination of single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
