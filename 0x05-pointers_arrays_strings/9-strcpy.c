#include "main.h"
#include <stdio.h>
/**
 * _strcpy - Function that copies the string pointed by the src
 * @dest: Pointer to be copiedon to it
 * @src: Pointer to be copied from
 * Return: char (If success)
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
