#include <unistd.h>
/**
 * _putchar - Program that prints a character
 * @c: Character to be printed
 * Return: 1 On success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
