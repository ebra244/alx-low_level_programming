#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - Program that prints all numbers of base 16 in lower case
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0x0;

	while (n <= 0xf)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
