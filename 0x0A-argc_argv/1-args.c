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
	int i = 1;
	
	if (argc == 1)
		printf("0");
	else
	{
		while (argv[i])
			i++;
		printf("%d", argc - 1);
	}
	printf("\n");
	return (0);
}
