#include "main.h"
#include <string.h>
/**
 * _strnacat - Function that concatenates two strings of n charcters
 * @dest: Destination String
 * @src: Source string
 * @n: Number of caharcters to be concatenated
 * Return: string On success
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
