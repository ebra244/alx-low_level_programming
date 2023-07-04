#include "lists.h"

/**
 * free_listint - Function that frees a listint_t list
 * @head: Pointer to the head
 */
void free_listint(listint_t *head)
{
	listint_t *traverse_ptr = head;

	if (!head)
		return;
	while (head->next)
	{
		traverse_ptr = head->next;
		free(head);
		head = traverse_ptr;
	}
	free(head);
}
