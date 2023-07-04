#include "lists.h"

/**
 * add_nodeint_end - Function that adds a node at the end of a list
 * @head: Pointer of pointer of head
 * @n: Number to be added at the end of a list
 * Return: The address of the list if success
 * Otherwise NULL.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *traverse_ptr = *head;
	listint_t *new_ptr = malloc(sizeof(listint_t));

	if (!new_ptr)
		return (NULL);
	new_ptr->n = n;
	new_ptr->next = NULL;

	if (!head)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_ptr;
		return (*head);
	}
	while (traverse_ptr->next)
		traverse_ptr = traverse_ptr->next;
	traverse_ptr->next = new_ptr;
	return (*head);
}
