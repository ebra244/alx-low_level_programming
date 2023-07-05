#include "lists.h"

/**
 * reverse_listint - Function that reverses a list
 * @head: Pointer of pointer to head
 * Return: Pointer to the first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_ptr = NULL;
	listint_t *next_ptr = NULL;

	if ((*head) == NULL || (*head)->next == NULL)
		return (*head);
	while (*head)
	{
		next_ptr = (*head)->next;
		(*head)->next = prev_ptr;
		prev_ptr = *head;
		*head = next_ptr;
	}
	*head = prev_ptr;
	return (*head);

}
