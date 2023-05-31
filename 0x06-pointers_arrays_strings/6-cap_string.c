#include "main.h"
/**
 * cap_string - Function that capitalize words
 * @str: Pointer to the string its words going to be capitalized
 * Return: Pointer to the string
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		for (; !(str[i] >= 'a' && str[i] <= 'z'); i++)
			;
			if ((str[i - 1] == ' ') || (str[i - 1] == '\t') || (str[i - i1] == '\n')
			|| (str[i - 1] == ',') || (str[i - 1] == '.') || (str[i - 1] == '!')
			|| (str[i - 1] == '?') || (str[i - 1] == '"') || (str[i - 1] == '(')
			|| (str[i - 1] == ')') || (str[i - 1] == '{') || (str[i - 1] == '}')
			|| (str[i - 1] == ';'))
				str[i] -= 32;
	}
	return (str);


}
