#include "main.h"

/**
 * string_nconcat - Function that con catenates two strings
 * @s1: Pointer to the destination string
 * @s2: Pointer to the string to be concatenated
 * @n: Number of characters to be concatenated
 * Return: Pointer to s2 if success
 * NULL if not success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, k, m;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	for (i = 0; s1[i]; i++)
		;
	for (j = 0; j < n && s2[j]; j++)
		;
	if (n >= j)
		ptr = malloc((i + j + 1) * sizeof(char));
	ptr = malloc((i + n + 1) * sizeof(char));
	j = n;

	if (!ptr)
		return (NULL);
	for (k = 0; k < i; k++)
		ptr[k] = s1[k];
	for (m = 0; k < (i + j); k++, m++)
		ptr[k] = s2[m];
	ptr[k] = '\0';
	return (ptr);
}
