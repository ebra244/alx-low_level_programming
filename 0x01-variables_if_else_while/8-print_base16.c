#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - Program that prints all numbers of base 16 in lower case
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	char c = 'a';

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
