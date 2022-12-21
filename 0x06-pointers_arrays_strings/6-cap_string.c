#include "main.h"
#include <string.h>
/**
 * cap_string - Function that capitalizes all words
 * @a: String to be capitalized
 * Return: String pointer
 */
char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
		a[i] = 65;
	return (a);
}
