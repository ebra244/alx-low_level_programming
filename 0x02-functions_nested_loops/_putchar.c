#include "main.h"
#include <unistd.h>
/**
 * _putchar - Program that prints a character to std cout
 * @c: The caracter to print
 * Return: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
