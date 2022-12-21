#include "main.h"
#include <string.h>
/**
 * _strcmp - Function that compares two strings
 * @s1: First string
 * @s2: second string
 * return: 1 (if Success)
 */
int _strcmp(char *s1, char *s2)
{
	if (s1 > s2)
		return (1);
	else if (s2 == s1)
		return (0);
	else
		return (-1);
}
