#include "main.h"

/**
 * set_bit - Function that sets the value of a bit to 1 at
 * the given index.
 * @n: Number to be setted its value
 * @index: The index at which the number value setted to 1.
 * Return: Always 1 if success
 * Othewise -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n |= (1 << index);
	return (1);
}
