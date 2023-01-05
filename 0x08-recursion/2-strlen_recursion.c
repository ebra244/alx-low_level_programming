#include "main.h"
/**
 * _strlen_recursion - Function that returns the length of a string
 * @s: Pointer to the string which length be returned
 * Return: 1 On success
 */
int _strlen_recursion(char *s)
{
	int strlen = 0;

	if (*s)
	{
		strlen++;
		strlen += _strlen_recursion(s + 1);
	}
}
