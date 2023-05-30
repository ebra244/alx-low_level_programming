#include "main.h"
/**
 * puts_half - function that prints half of a string
 * @str: Pointer of the string to be printed
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i]; i++)
		;
	if ((i - 1) % 2 == 0)
	{
		for (j = (i / 2); str[j]; j++)
			_putchar(str[j]);
	}
	else
	{
		for (j = (i - 1) / 2; str[j]; j++)
			_putchar(str[j]);
	}
	_putchar('\n');
}
