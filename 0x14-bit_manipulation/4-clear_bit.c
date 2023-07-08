#include "main.h"

/**
 * clear_bit - Function that sets the value of a bit to 0
 * @n: Number to be setted
 * @index: index of the number to be cleared
 * Return: Always 1 if succeed
 * Otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= (~(1 << index));
	return (1);
}
