#include "lists.h"

/**
 * free_listint2 - Function that frees a list
 * @head: Pointer of pointer of head
 */
void free_listint2(listint_t **head)
{
	listint_t *traverse = *head;

	if (!head)
		return;
	if (!(*head))
		return;
	while ((*head)->next)
	{
		traverse = (*head)->next;
		free (*head);
		*head = traverse;
	}
	free (*head);
}
