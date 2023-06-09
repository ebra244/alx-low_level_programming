#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints the minimum number of coins
 * @argc: Counter of arguments passed to the program
 * @argv: Array of strings of arguments to be passed
 * Return: 0 On success
 */
int main(int argc, char *argv[])
{
	int i, total, change = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	total = atoi(argv[1]);
	if (total < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && total >= 0; i++)
	{
		while (total >= coins[i])
		{
			total -= coins[i];
			change++;
		}
	}
	printf("%d\n", change);
	return (0);
}
