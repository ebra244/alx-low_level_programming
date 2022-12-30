#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcpy - Function that copies the string pointed by the src
 * @dest: Pointer to be copiedon to it
 * @src: Pointer to be copied from
 * Return: char (If success)
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j;

	while (src[i] != '\0')
	{
		for (j = 0; dest[j] != '\0'; j++)
			dest[j] = src[i];
		i++;
	}
	return (dest);
}
