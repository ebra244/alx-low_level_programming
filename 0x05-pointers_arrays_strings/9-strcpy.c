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

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
