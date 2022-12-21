#include "main.h"
#include <string.h>
/**
 * _strncat - Function that concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * @n: Number of Characters to be conactenated
 * Return: String (If success)
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
