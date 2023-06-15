#include "main.h"

/**
 * malloc_checked - Function that allocates memory
 * @b: Size of integer to be allocated
 * Return: Always Pointer to the allocated space if success
 * 98 if fails
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}
