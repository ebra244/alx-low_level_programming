#include "main.h"

/**
 * get_endianness - Function that checks endianness.
 * Return: Always 0 if big endian
 * 1 if little endian.
 */
int get_endianness(void)
{
	int n = 1;
	char *ptr = (char *)&n;

	if (*ptr == 1)
		return (1);
	return (0);
}
