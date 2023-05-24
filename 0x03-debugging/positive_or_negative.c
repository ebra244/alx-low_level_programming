#include "main.h"
#include <stdio.h>
/**
 * positive_or_negative - Function that prints weather a number is positive or negative
 * @i: Number to be tested
 */
void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n");
}
