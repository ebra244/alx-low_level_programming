#include "main.h"

int _strlen(char *t);
int _palchk(char *u, int j);
/**
 * is_palindrome - Function that returns weather a string is palindrome or not
 *@s: Pointer to the string to be tested
 *Return: Always 1 if string is palindrome
 *0 if string is not palindrome
 */
int is_palindrome(char *s)
{
	int size;

	size = _strlen(s);
	return (_palchk(s, size));
}
/**
 * _strlen - checks string length
 * @t: char type pointer to string
 * Return: length of  string
 */
int _strlen(char *t)
{
	int i = 0;

	if (*t != '\0')
	{
		i = 1 + _strlen(t + 1);
	}
	return (i);
}
/**
 * _palchk - checks if string is a palindrome
 * @u: string
 * @j: string length
 * Return: 1 if palindrome, 0 otherwise
 */
int _palchk(char *u, int j)
{
	if (j <= 0)
		return (1);
	if (*u == *(u + j - 1))
		return (_palchk(u + 1, j - 2));
	else
		return (0);
}
