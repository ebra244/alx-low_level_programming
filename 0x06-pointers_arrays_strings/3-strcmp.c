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
	int i = 0;
	int j = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (s1[i] > s2[j])
		return (1);
	else if (s1[i] == s2[j])
		return (0);
	else
		return (-1);
}
