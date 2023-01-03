#include "main.h"
/**
 * set_string - Function that sets the value of a pointer to a char
 * @s: Double pointer to the string which will be setted
 * @to: Pointer to which the string will be setted
 */
void set_string(char **s, char *to)
{
	*s = to;
}
