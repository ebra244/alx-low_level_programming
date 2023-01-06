#include "main.h"
/**
 * _atoi - Function that converts String to integer
 * @s: String to be converted
 * Return: 1 On success
 */
int _atoi(char *s)
{
	int sign;
	unsigned int n;
	char *temp;

	temp = s;
	n = 0;
	sign = 1;
	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if (*temp == '-')
			sign *= -1;
		temp++;
	}
	if (*temp != '\0')
	{
		do {
			n = n * 10 + (*temp - '0');
		} while (*temp >= '0' && *temp <= '9');
	}
	return (n * sign);

}
