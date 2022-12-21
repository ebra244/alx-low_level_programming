#include "main.h"
/**
 * _strncpy - Function that copies a string
 * @dest: String to be copied to
 * @src: String to be copied from
 * @n: Number of cahracters to be copied
 * Return: String (if Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
		i++;
	i = i + 1;
	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);

}
