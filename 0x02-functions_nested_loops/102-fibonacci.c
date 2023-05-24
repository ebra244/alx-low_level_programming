#include <stdio.h>
/**
 * fibonacci - Function that returns the fibonacci
 * @n: Number to be printed its fibonacci value
 * Return: The fibonacci value of teh argument
 */
long int fibonacci(int n)
{
	if (n == 1)
		return (1);
	else if (n > 1)
		return (fibonacci(n - 1) + fibonacci(n - 2));
}
/**
 * main - Entry Point
 * Return: Always 0 (success)
 */
int main(void)
{
	long int result = fibonacci(50);

	printf("%ld", result);
	printf("\n");
	return (0);
}
