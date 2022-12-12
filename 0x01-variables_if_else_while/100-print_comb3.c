#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * main - Program that prints all possible combination of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int a = 0; a <= 9; a++)
	{
		for (int b = a + 1; b <= 9; b++)
		{
			putchar(a + '0');
			putchar(b + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
