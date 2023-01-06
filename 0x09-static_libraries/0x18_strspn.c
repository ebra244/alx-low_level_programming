#include "main.h"
/**
 * _strspn - Function that gets teh lenght of a prefix substring
 * @s: String
 * @accept: Prefix of the string
 * Return: Number of bytes(in the initial segment of s)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
