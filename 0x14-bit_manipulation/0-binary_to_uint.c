#include "main.h"

/**
 * binary_to_uint - Function that converts a binary to an integer
 * @b: Pointer to the string of binary number
 * Return: The converted number if success
 * Otherwise zero.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	if (!b)
		return (0);

	while (*b)
	{
		res = res << 1;

		if ((*b < 48) || (*b > 49))
			return (0);

		if (*b == '1')
			res += 1;
		b++;
	}
	return (res);
}
