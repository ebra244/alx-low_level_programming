#include <stdio.h>

/**
 * main - Entry Point
 * @argc: Number of arguments to be passed
 * @argv: Array of string pointers
 * Return: Always 0 Success
 * Non zero if not successed
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s", argv[0]);
	printf("\n");
	return (0);
}
