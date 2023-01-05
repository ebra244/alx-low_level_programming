#include <unistd.h>
/**
 * _putchar - Function that prints a character
 * @c: Character to be printed
 * Return: 1 On success and
 * -1 On not sucess
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
