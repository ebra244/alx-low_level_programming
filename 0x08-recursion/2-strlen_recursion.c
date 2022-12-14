#include "main.h"
/**
 * _strlen_recursion - Function that returns the length of a string
 * @s: Pointer to the string which length be returned
 * Return: 1 On success
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
