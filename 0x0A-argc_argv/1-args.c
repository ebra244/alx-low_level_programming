#include <stdio.h>

/**
 * main - Entry point
 * @argc: Number of arguments to be passed
 * @argv: Array of strings pointer
 * Return: Always 0 if successed
 * Non zero if not successed
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d", argc - 1);
	printf("\n");
	return (0);
}
