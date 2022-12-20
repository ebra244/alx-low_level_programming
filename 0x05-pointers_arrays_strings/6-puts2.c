#include "main.h"
/**
 * puts2 - Function that prints every other character of a string
 * @str: String to be printed
 */
void puts2(char *str)
{
	int i = 0;
	int j = i + 2;

	while (str[i] != '\0')
	{
		_putchar(str[j]);
		i++;
	}
	_putchar('\n');
}
