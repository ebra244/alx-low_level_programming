#include <unistd.h>

/**
 * _putchar - Function that prints chracter to std out
 * @c: Character to be printed
 * Return: Always 1 Success
 * -1 if not success
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
