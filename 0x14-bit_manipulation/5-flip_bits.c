#include "main.h"

/**
 * flip_bits - Function that returns the number of bits you woud need to flip
 * from one number to the other.
 * @n: Number to be flipped.
 * @m: Flipped number.
 * Return: The number of flips if success
 * 0 if not
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	unsigned int count = 0;

	while (flip)
	{
		flip &= flip - 1;
		count++;
	}
	return (count);
}
