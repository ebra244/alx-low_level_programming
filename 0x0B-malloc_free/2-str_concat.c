#include "main.h"

/**
 * str_concat - Function that concatenates two strings
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 * Return: Pointer to the concatenated string i.e s1 if success
 * NULL if not success
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i, j, k, m;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;
	str = (char *)malloc((i + j + 1) * sizeof(char));
	if (!str)
		return (NULL);
	for (k = 0; k < i; k++)
		str[k] = s1[k];
	for (k = i, m = 0; k < (i + j); k++, m++)
	{
		str[k] = s2[m];
	}
	str[k] = '\0';
	return (str);
}
