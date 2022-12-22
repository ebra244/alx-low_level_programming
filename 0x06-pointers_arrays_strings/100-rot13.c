#include "main.h"
/**
 * rot13 - Function that encodes a string using rot13
 * @a: pointer to string to be encoded
 * Return: Pointer to string
 */
char *rot13(char *a)
{
	int i = 0;
	int j;
	char alp[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
			'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
			'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
			'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f',
			'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
			'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
			'w', 'x', 'y', 'z', '\0'};
	char rot13[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',
			'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C',
			'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
			'L', 'M', 'n', 'o', 'p', 'q', 'r', 's',
			't', 'u', 'v', 'w', 'x', 'y', 'z', 'a',
			'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
			'j', 'k', 'l', 'm', '\0'};

	while (a[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (a[i] == alp[j])
			{
				a[i] = rot13[j];
			}
		}
		i++;
	}
	return (a);

}
