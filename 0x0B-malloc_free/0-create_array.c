#include "main.h"

/**
 * create_array - Function that creates an array of chars
 * @size: Size of the array to be created
 * @c: Characters to create the array
 * Return: Pointer to the array if success
 * NULL if not success
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *array;

	if (size == 0)
		return (NULL);
	array = (char *)malloc(size * sizeof(char));

	if (!array)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
