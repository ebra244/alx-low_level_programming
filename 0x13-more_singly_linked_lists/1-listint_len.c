#include "lists.h"

/**
 * listint_len - Function that returns the number of elements of a list
 * @h: Pointer to the head of a list
 * Return: The number of elements if success
 * Otherwise zero
 */
size_t listint_len(const listint_t *h)
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
