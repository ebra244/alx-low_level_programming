#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of a char: %lu byte(s)\n",(long unsigned) sizeof(char));
	printf("size of a int: %lu byte(s)\n",(long unsigned) sizeof(int));
	printf("size of a long int: %lu byte(s)\n",(long unsigned) sizeof(long int));
	printf("size of a long long int: %lu byte(s)\n",(long unsigned) sizeof(long long int));
	printf("size of a float: %lu byte(s)\n",(long unsigned) sizeof(float));
	return (0);
}
