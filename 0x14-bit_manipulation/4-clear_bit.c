#include "main.h"

/**
 * clear_bit - Function that sets the value of a bit to 0 at a given index.
 * @n: Number to be setted its value at the given index.
 * @index: The index, you want to set.
 * Return: Always 1 if success
 * Otherwise -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= (~(1 << index));
	return (1);
}
