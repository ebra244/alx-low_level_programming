#include <unistd.h>
#include "main.h"
/**
* _putchar - function which prints character
*@c: Character to be printed
*Return: Always 1 (Success)
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
