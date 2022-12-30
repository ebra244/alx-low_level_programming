#include "main.h"
#include <string.h>
/**
 * rev_string - Function that reverse a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
		i++;
	j = i - 1;
	while (j > 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
