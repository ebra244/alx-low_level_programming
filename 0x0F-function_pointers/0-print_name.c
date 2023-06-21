#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Function that prints the name
 * @name: Pointer to the name
 * @f: Function pointer that accept one argument
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
	else
		return;
}
