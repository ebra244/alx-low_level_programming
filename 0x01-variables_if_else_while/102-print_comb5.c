#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that prints all possible combination of two digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int a = 0; a <= 9; a++)
	{
		for (int b = 0; b <= 9; b++)
		{
			putchar(a + '0');
			putchar(b + '0');
			putchar(',');
			putchar(' ');
		}
	}
}
