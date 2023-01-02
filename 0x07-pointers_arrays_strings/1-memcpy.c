#include "main.h"
#include <string.h>
/**
 * _memcpy - Function that copies memory area
 * @dest: String pointer for characters to be copied
 * @src: String pointer for the source of characters
 * @n: Number of characters to be copied
 * Return: Pointer to the string(On success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
