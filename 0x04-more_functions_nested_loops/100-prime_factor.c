#include <stdio.h>
#include <math.h>
/**
 * main - Program that prints the largest prime factor of a number
 * @n: The number to be tested
 * return: 0
 */
int main(void)
{
	long int num = 612852475143;
	long int div = 2;
	long int max_prime_fact;
	
	while (num != 0)
	{
		if (num % div != 0)
			div = div + 1;
		else
		{
			max_prime_fact = num;
			num = num / div;

			if (num == 1)
			{
				printf("%ld is the largest prime factor:", max_prime_fact);
				break;
			}
		}
	}
	printf("\n");
	return (0);
}
