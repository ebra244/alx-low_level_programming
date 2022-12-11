#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that prints all single digit numbers of base ten
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');
	return (0);
}
