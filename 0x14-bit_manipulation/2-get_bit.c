#include "main.h"

/**
 * get_bit - Function that returns the value of a bit at a given index
 * @n: Number to be tested
 * @index: Index of the number
 * Return: The value of a bit if success
 * Otherwise -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	n = n >> index;
	return (n & 1);
}
