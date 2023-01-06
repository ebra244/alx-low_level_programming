#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcpy - Function that copies the string pointed by src
 * @dest: String to be copied on to it
 * @src: string to be copied from
 * Return: String on success
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
