#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the nth node of a list
 * @head: Pointer to the head
 * @index: The index of node
 * Return: The nth node of a list if success
 * Otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (!head)
		return (NULL);
	while (head && (count < index))
	{
		head = head->next;
		count++;
	}
	return (head);
}
