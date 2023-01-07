#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int test_num(char *s);
/**
 * main - Program that adds positive numbers
 * @argc: Counter of arguments passed to the program
 * @argv: Array of string of arguments
 * Return: 0 On success
 */
int main(int argc, char *argv[])
{
	int i;
	int str_to_int;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (test_num(argv[i]))
		{
			str_to_int = atoi(argv[i]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);

}
/**
 * test_num - Function that selects digit
 * @s: String to be checked
 * Return: 1 On success
 */
int test_num(char *s)
{
	long unsigned int n = 0;

	while (n < strlen(s))
	{
		if (!isdigit(s[n]))
			return (0);
		n++;
	}
	return (1);
}
