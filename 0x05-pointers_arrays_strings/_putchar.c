#include "main.h"
/**
 * _putchar - Function to print character
 * @c: character to be printed
 * Return: 1 (on Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
