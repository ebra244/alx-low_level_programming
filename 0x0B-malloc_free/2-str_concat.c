#include "main.h"
#include <stdlib.h>
int _strlen(char *s);
/**
 * str_concat - Function that concatenates two strings
 * @s1: Pointer for dest string
 * @s2: Pointer for src string
 * Return: Concatenated String
 */
char *str_concat(char *s1, char *s2)
{
	char *dest;
	unsigned int i, j, size;

	if (s1 == NULL)
		s2 = " ";
	size = (_strlen(s1) + _strlen(s2) + 1);
	dest = (char *)malloc(size * sizeof(char));
	if (dest == 0)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		dest[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		dest[i] = s2[j];
		i++;
	}
	return (dest);
}
/**
 * _strlen - Function that prints number of string characters
 * @s: Pointer for the string
 * Return: 1 On success
 */
int _strlen(char *s)
{
	unsigned int i = 0;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

