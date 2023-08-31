#include <unistd.h>

/**
 * _putchar - Function which prints a character to stdout
 * @c: Character to be printed
 * Return: Always 1 if success
 * Otherwise 0
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
