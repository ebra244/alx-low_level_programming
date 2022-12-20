#include "main.h"
/**
 * rev_string - Function that reverse a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i, j, k, temp;

	i = 0;
	while (s[i] != '\0')
		i++;
	j = i - 1;
	k = 0;
	while (k < j)
	{
		temp = s[k];
		s[k] = s[j];
		s[j] = temp;
		k++;
		j--;
	}
	_putchar('\n');
}
