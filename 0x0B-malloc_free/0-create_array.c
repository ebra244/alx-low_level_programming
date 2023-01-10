#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - Function that creates an array of chars
 * @size: Size of array of chars
 * @c: Array of charcters
 * Return: NULL if size is 0
 * otherwise returns pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);
	str = (char *)malloc(size * sizeof(c));
	if (str == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
