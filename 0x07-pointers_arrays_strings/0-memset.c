#include "main.h"
#include <string.h>
/**
 * _memset - Function that fills memory with constant byte
 * @s: String pointer to be filled
 * @b: Character with which filled
 * @n: Number of characters
 * Return: String (On success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

