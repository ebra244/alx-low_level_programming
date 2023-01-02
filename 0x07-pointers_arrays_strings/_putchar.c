#include <unistd.h>
/**
 * _putchar - Function that prints character
 * @c: Character to be printed
 * Return: 1 (On Success)
 * 0 (on Unsuccess)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
