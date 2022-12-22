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
		while (!(a[i] >= 'a' && a[i] <= 'z'))
			i++;
		if (a[i] == ' ' || a[i] == ',' || a[i] == ';' || a[i] == '.'
				 || a[i] == '?' || a[i] == '(' || a[i] == ')'
				  || a[i] == '{' || a[i] == '}' || a[i] == '\t'
				|| a[i] == '\n' || a[i] == '!' || a[i] == '"'
				|| i == 0)
			a[i] -= 32;
		i++;

	}
	return (a);
}
