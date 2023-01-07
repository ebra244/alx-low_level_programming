#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Program that multiplies two numbers
 * @argc: Counter of Arguments
 * @argv: Array of String of Arguments
 * Return: 0 On success
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
		return (0);
	}
	printf("Error\n");
	return (1);
}
