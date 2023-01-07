#include "main.h"
#include <stdio.h>
/**
 * main - Function thatprints all arguments it receives
 * @argc: Counter of argumnets
 * @argv: Array of strings of function
 * Return: 0 On success
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}
