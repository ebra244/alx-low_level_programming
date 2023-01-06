#include "main.h"
#include <string.h>
/**
 * _strncpy - Function that copies a string
 * @dest: String to be copied to
 * @src: String to be copied from
 * @n: Number of characters to be copied
 * Return: String On success
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
		return (dest);
}
