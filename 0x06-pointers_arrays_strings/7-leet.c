#include "main.h"
/**
 * leet - Function that encodes a string in to 1337
 * @a: String pointer to be encoded
 * Return: String pointer
 */
char *leet(char *a)
{
	int i = 0;
	int j;

	int leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (a[i] != '\0')
	{
		for (j = 0; j < 8; j++)
		{
			if (a[i] == leet[j] || a[i] - 32 == leet[j])
				a[i] = j + '0';
		}
		i++;
	}
	return (a);
}
