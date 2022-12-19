#include"main.h"
/**
 * print_rev - function that prints string in reverse
 * @s: String to be printed
 */
void print_rev(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s--);
	}
	_putchar('\n');
}
