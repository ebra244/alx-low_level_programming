#include "main.h"

/**
* largest_number - Program returns largest of three numbers
* @a: first argument
* @b: second argument
* @c: last argument
* Return: largest argument
*/
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
		largest = a;
	else if (b > a && b > c)
		largest = b;
	else
		largest = c;

	return (largest);
}
