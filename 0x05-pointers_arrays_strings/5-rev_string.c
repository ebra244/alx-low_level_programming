#include "main.h"
#include <string.h>
/**
 * rev_string - Function that reverse a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
