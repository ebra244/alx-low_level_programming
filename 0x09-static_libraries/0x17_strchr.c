#include "main.h"
#include <string.h>
/**
 * _strchar - Function that locates a character in a string
 * @s: Pointer to the String 
 * @c: Charcter in the string
 * Return: Pointer to the string
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return ('\0');
}
