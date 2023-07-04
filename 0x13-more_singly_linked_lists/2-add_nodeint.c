#include "lists.h"

/**
 * add_nodeint - Function that adds a new node at the begining
 * @head: Pointer of pointer of head of the list
 * @n:Number to be added at the begining of the list
 * Return: The address of a new element if success
 * Otherwise NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_ptr = malloc(sizeof(listint_t));

	if (!head)
		return (NULL);
	new_ptr->n = n;
	new_ptr->next = *head;
	*head = new_ptr;
	return (*head);

}
