#include "main.h"

/**
 * _strdup - Function that returns a pointer to newly allocated space
 * @str: Pointer to the string to be allocated its copy
 * Return: Pointer to the allocated space if success
 * NULL if not success
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i, j;

	if (!str)
		return (NULL);

	for (i = 0; str[i]; i++)
		;
	s = (char *)malloc((i + 1) * sizeof(char));

	if (!s)
		return (NULL);
	for (j = 0; j < i; j++)
		s[j] = str[j];
	s[j] = '\0';
	return (s);
}
