#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of arguments to be passed
 * @argv: Array of strings pointers
 * Return: Always 0 if success
 * Non zero if not successed
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}
