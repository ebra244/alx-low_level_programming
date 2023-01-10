#include "main.h"
#include <stdlib.h>
#include <string.h>
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 * _strdup - Function that returns a pointer to a newly allocated space
 * @str: Char pointer to the string for which will be allocated
 * Return: Pointer to the allocated space
 */
char *_strdup(char *str)
{
	char *dest;
	unsigned int size;

	if (str == 0)
		return (NULL);
	size = _strlen(str) + 1;
	dest = (char *)malloc(size * sizeof(char));
	if (dest == 0)
		return (NULL);
	_strcpy(dest, str);
	return (dest);

}
/**
 * _strlen - Function that returns number of characters in a string
 * @s: Pointer to the string
 * Return: 1 On success
 */
int _strlen(char *s)
{
	unsigned int n = 0;

	while (s[n] != '\0')
		n++;
	return (n);

}
/**
 * _strcpy - Function that copies charactersof the src to dest
 * @src: Pointer to the string from which characters are copied
 * @dest: Pointer to the string to which characters are copied
 * Return: Pointer to the dest string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
