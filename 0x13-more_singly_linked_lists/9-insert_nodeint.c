#include "lists.h"

/**
 * insert_nodeint_at_index - Function that inserts a new node
 * at agiven position
 * @head: Pointer of pointer to the head of the list
 * @idx: The index at which the new node to be added
 * @n: Value of the new node to be added
 * Return: The address of the new node if success
 * Otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new_ptr;
	listint_t *trav_ptr;

	if (!head || !(*head))
		return (NULL);
	new_ptr = malloc(sizeof(listint_t));

	new_ptr->n = n;
	new_ptr->next = NULL;
	if (!new_ptr)
		return (NULL);

	trav_ptr = *head;

	while (trav_ptr && (count < idx))
	{
		count++;
		trav_ptr = trav_ptr->next;
	}
	if (idx == 0)
	{
		new_ptr->next = *head;
		*head = new_ptr;
	}
	else
	{
		new_ptr->next = trav_ptr->next;
		trav_ptr->next = new_ptr;
	}
	return (new_ptr);
}
