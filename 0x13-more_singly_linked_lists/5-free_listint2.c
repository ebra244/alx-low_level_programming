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
	while (traverse)
	{
		traverse = traverse->next;
		free (*head);
	}
	*head = NULL;
}
