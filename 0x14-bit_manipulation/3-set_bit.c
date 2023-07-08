#include "main.h"

/**
 * set_bit - Function that sets the value of a bit to 1
 * @n: Number to be setted
 * @index: The index at which the number setted to 1
 * Return: Always 1 if success
 * Otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n |= (1 << index);
	return (*n);

}
