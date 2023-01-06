#include "main.h"
/**
 * _abs - Function that returns absolute value
 * @n: Number whose absolute value will be returned
 * Return: The absolute value of a number
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
