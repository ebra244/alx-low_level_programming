#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that prints alphabet in lower case except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'e' && c == 'q')
		{
			break;
		}
		else
		{
			putchar(c);
		c++;
		}
	}
	putchar('\n');
	return (0);
}
