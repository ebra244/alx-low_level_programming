#include <stdio.h>
#include <unistd.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *
 * main - Entry Point
 *
 * Retrn: Always 0 (Success)
 */
int main(void)
{
	char n = 'a';
	char m = 'A';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	while (m <= 'Z')
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
