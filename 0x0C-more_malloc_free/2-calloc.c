#include "main.h"

/**
 * _calloc - Function that allocates memory
 * @nmemb: Number of elements of the array
 * @size: Storage size of each element
 * Return: Pointer to the allocated space if success
 * NULL if fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * sizeof(unsigned int));

	if (!ptr)
		return (NULL);
	for (i = 0; i < nmemb + size; i++)
		ptr[i] = 0;
	return (ptr);
}
