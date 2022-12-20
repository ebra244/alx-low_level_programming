#include "main.h"
/**
 * puts_half - Function that print the second half of the string
 * @str: String to be printed its half
 */
void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
	{
		int j = i / 2;

		_putchar(str[j]);
	}
	else
	{
		int k = (i - 1) / 2;

		_putchar(str[k]);
	}
	_putchar('\n');

}
