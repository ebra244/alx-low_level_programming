#include "main.h"
#include <string.h>
/**
 * _strcmp - Function that compares two strings
 * @s1: First String
 * @s2: Second String
 * Return: 1 (if s1 > s2), 0 (if s1 == s2), -1 (if s1 < s2)
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
