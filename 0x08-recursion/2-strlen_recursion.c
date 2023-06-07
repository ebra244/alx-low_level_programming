#include "main.h"

/**
 * _strlen_recursion - Function that returns the length of a string
 * @s: Pointer to the string
 * Return: The length of string if success
 * 0 if not success
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (_strlen_recursion(s + 1) + 1);
	else
		return (0);
}
