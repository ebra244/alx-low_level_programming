#include "lists.h"

/**
 * pop_listint - Function that deletes a head of a list
 * @head: Pointer of pointer to the head
 * Return: Head nod's data(n) if success
 * Otherwise NULL
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int m;

	if (!(*head))
		return (0);
	tmp = *head;
	m = tmp->n;
	*head = (*head)->next;
	free(tmp);
	return (m);

}
