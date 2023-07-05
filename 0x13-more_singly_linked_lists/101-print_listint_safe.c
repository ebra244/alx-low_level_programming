#include "lists.h"

/**
 * print_listint_safe - Function that prints a list
 * @head: Pointer to the head
 * Return: Number of nodes if success
 * Otherwise exit with status 98
 */
size_t print_listint_safe(const listint_t *head)
{
	int node = 0;
	if (head == NULL)
		exit (98);

	while ((head->next) != NULL)
	{
		node++;
		printf("%d\n", head->n);
		head = head->next;

	}
	return (node);
}
