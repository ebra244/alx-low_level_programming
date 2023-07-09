#include "lists.h"

/**
 * print_list - Function that prints all elements of a list
 * @h: Pointer to the head of the list
 * Return: The number of nodes if success
 * 0 if not succeed
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	if (!h)
		return (0);
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			count++;
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			count++;
			h = h->next;
		}

	}
	return (count);
}
