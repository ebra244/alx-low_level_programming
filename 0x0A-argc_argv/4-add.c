#include <stdio.h>

/**
 * main - Entry point
 * @argc: Number of arguments to be passed
 * @argv: Array of string pointers
 * Return: Always 0 success
 * Non zero not success
 */
int main(int argc, char *argv[])
{
	int total, i, n;
	char *p;

	total = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			n = atrtol(argv[i], &p, 10);
			if (!*p)
				total += n;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", total);
	return (0);

}
