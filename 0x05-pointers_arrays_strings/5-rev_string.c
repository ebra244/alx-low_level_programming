#include "main.h"
/**
 * rev_string - Function that reverse a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
		i++;
	j = i - 1;
	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
