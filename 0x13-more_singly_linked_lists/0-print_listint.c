#include "lists.h"

/**
 * print_listint - Function that prints all elements of a list
 * @h: Pointer to the head of a list
 * Return: The number of nodes if success
 * Otherwise zero.
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	if (!h)
		return (0);

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
