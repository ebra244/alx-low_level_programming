#include "main.h"
#include <string.h>
/**
 * rev_string - Function that reverse a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char temp;

	j = strlen(s) - 1;
	while (i < j)
	{
		temp = s[j];
		s[j] = s[i];
	       s[i] = temp;
	       _putchar(s[i]);
	       i++;
	       j--;
	}
	_putchar('\n');
}
