#include "main.h"
#include <string.h>
/**
 * _strchr - Function that locates a chracter in a string
 * @s: Pointer to the string of character
 * @c: The Character in the string
 * Return: Pointer to the string
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return ('\0');

}
