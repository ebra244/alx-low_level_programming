#include "lists.h"

/**
 * list_len - Function that returns the number of elements of a list
 * @h: Pointer to the head of alist
 * Return: The number of elements if success
 * Otherwise 0
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	if (!h)
		return (0);
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
