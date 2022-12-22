#include "main.h"
#include <string.h>
/**
 * cap_string - Function that capitalizes all words
 * @a: String to be capitalized
 * Return: String pointer
 */
char *cap_string(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		while (a[i] >= 'a' && a[i] <= 'z')
			i++;
		if (a[i - 1] == ' ' || a[i - 1] == ',' || a[i - 1] == ';' || a[i - 1] == '.'
				 || a[i - 1] == '?' || a[i - 1] == '(' || a[i - 1] == ')'
				  || a[i - 1] == '{' || a[i - 1] == '}' || a[i - 1] == '\t'
				|| a[i - 1] == '\n' || a[i - 1] == '!' || a[i - 1] == '"'
				|| i == 0)
			a[i] -= 32;
		i++;

	}
	return (a);
}
