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
	listint_t *traverse_ptr = head;
	unsigned int count = 0;

	if (!head)
		return (NULL);
	while (traverse_ptr && count <= index)
	{
		traverse_ptr = traverse_ptr->next;
		count++;
	}
	return (traverse_ptr);
}
