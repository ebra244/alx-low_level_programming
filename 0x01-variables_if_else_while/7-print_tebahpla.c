#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * main - Program that prints lower case alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
