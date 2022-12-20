#include "main.h"
/**
 * puts_half - Function that print the second half of the string
 * @str: String to be printed its half
 */
void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
		i++;
	 j = i / 2;
	if (i % 2 == 1)
		j++;
	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');

}
