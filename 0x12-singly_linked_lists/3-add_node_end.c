#include "lists.h"
#include <string.h>

/**
 * str_len - Function that returns the length of string
 * @str: Pointer to the string
 * Return: String length if success
 * Otherwise 0.
 */
int str_len(const char *str)
{
	int i = 0;

	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}
/**
 * add_node_end - Function that adds a new node at the end of a list
 * @head: Pointer to pointer of a head
 * @str: Pointer to the data of the node
 * Return: The address of new element if success
 * Otherwise NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(size_t));
	list_t *trav = *head;

	if (!head)
		return (NULL);
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = str_len(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (trav->next)
		trav = trav->next;
	trav->next = new;
	return (new);
}
