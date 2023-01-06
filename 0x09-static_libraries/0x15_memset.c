#include "main.h"
#include <string.h>
/**
 * _memset - Function that fills memory with constant byte
 * @s: String Pointer to be filled
 * @b: Character with wich filled
 * @n: Number of characters
 * Return: String
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
