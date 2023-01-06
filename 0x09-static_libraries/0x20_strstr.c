#include "main.h"
/**
 * _strstr - Function that locates substring
 * @haystack: Pointer to the String
 * @needle: Pointer to the substring
 * Return: Pointer to the begning of located substring
 * NULL (if substring is not found)
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
