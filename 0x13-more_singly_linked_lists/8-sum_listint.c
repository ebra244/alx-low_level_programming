#include "lists.h"

/**
 * sum_listint - Function that returns the sum of nodes of alist
 * @head: Pointer to the head
 * Return: Sum of nodes if success
 * Otherwise 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	if ((head->next) == NULL)
		return (head->n);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
