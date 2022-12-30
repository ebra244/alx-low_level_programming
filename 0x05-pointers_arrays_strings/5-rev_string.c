#include "main.h"
#include <string.h>
/**
 * rev_string - Function that reverse a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i = 0;
	int j, k;
	char *str, temp;

	while (s[i] != '\0')
		i++;
	str = s;
	for (j = 0; j < (i - 1); j++)
	{
		for (k = j + 1; k > 0; k--)
		{
			temp = *(str + k);
			*(str + k) = *(str + (k - 1));
			*(str + (k - 1)) = temp;
		}
	}
}
