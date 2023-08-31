#include "main.h"

/**
 * binary_to_uint - Function that converts a binary to an integer
 * @b: Pointer to the string of the binary number
 * Return: The converted number if success
 * Otherwise zero.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		result = result << 1;

		if ((*b < 48) || (*b > 49))
			return (0);

		if (*b == '1')
			result = result + 1;
		b++;

	}
	return (result);
}

