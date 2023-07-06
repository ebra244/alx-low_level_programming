#include <unistd.h>

/**
 * _putchar - Function that prints character to stdout
 * @c: Character to be printed
 * Return: Always 1 if success
 * Otherwise 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
