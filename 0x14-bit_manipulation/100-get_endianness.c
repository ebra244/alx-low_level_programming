#include "main.h"

/**
 * get_endianness - Function that checks for endianess
 * Return: Always 1 if little endian
 * 0 big endian.
 */
int get_endianness(void)
{
	int n = 1;
	char *ptr = (char *)&n;

	if (*ptr == 1)
		return (1);
	return (0);
}
