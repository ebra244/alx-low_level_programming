#include "main.h"
#include <string.h>
/**
 * string_toupper - Function that changes all lowercase letters to upper
 * @a: String pointer to be changed
 * Return: string pointer
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] = a[i] - 32;
	}
	return (a);
}
