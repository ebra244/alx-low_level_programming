#include "main.h"
#include <stdio.h>
/**
 * main - Program that prints number of arguments passed to it
 * @agrc: Counter of number of arguments
 * @argv: Array of string of a program
 * Return: 0 On success
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%i\n", argc - 1);
	return (0);
}
