#include "main.h"
#include <string.h>
/**
 * _strcmp - Function that compares two strings
 * @s1: First string
 * @s2: second string
 * Return: 1 (if S1 > S2), 0 (if S1 == S2), -1 (if S1 < S2)
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
