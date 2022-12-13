#include "main.h"
/**
 * print_alphabetx10 - Program that prints alphabet 10 times in lower case
 */
void print_alphabet_x10(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		int n = 0;

		while (n <= 10)
		{
			_putchar(c);
			n++;
		}
		c++;
	}
	_putchar('\n');
}
