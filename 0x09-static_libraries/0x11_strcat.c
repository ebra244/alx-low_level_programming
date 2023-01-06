#include "main.h"
/**
 * _strcat - Function that concatenates two strings
 * @dest: Destination String
 * @src: Source string
 * Return: String On success
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i + 1;
	}
	dest[i] = '\0';
	return (dest);
}
