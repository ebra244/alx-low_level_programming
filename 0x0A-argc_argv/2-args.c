#include <stdio.h>

/**
 * main - Entry point
 * @argc: Number of arguments to be passed
 * @argv: Array of strings pointer
 * Return: Always 0 if success
 * Non zero if not successed
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
