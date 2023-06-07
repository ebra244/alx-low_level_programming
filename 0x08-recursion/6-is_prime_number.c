#include "main.h"

/**
 * prime - Function that returns the weather the number is prime or not
 * @n: Number to be tested
 * @i: Arbitrary number for test
 * Return: Always 1 success
 * 0 otherwise
 */

int prime(int n, int i)
{
	if (n <= 1)
		return (0);
	else if (n % i == 0 && i > 1)
		return (0);
	else if (n / i < i)
		return (1);
	return (prime(n, i + 1));
}
/**
 * is_prime_number _ Function that returns weater the number is prime or not
 * @n: Number to be tested
 * Return: Always -1 if not success
 * 1 if success
 */
int is_prime_number(int n)
{
	return (prime(n, 1));
}
