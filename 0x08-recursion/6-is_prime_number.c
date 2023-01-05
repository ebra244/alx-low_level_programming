#include "main.h"
int got_prime(int n, int i);
/**
 * is_prime_number - Function that returns prime number
 * @n: Integer to be tested
 * Return: 1 On success Otherwise 0
 */
int is_prime_number(int n)
{
	return (got_prime(n, 1));
}
/**
 * got_prime - Function that returns prime number
 * @n: Number to be tested
 * @i: Arbitrary number for test
 * Return: 1 On success
 */
int got_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	else if (n % i == 0 && i > 1)
		return (0);
	else if ((n / i) < i)
		return (1);
	return (got_prime(n, i + 1));
}
