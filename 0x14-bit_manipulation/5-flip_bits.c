#include "main.h"

/**
 * flip_bits - Function that returns the number of bits you nedded to
 * flip to get the second number
 * @n: Number to be flipped
 * @m: Second number
 * Return: The number of flips if success
 * Zero if not
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int p = n ^ m;
	unsigned int count = 0;

	while (p)
	{
		p &= p - 1;
		count++;
	}
	return (count);
}
