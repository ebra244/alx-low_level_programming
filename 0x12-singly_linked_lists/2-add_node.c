#include "lists.h"
#include <string.h>

/**
 * str_len - Function that returns the string length
 * @str: Pointer to the string
 * Return: Length of the string if success
 * Otherwise 0.
 */
size_t str_len(const char *str)
{
	int i = 0;

	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}
/**
 * add_node - Function that adds a new node at the begining of a list
 * @head: Pointer to pointer of head
 * @str: Pointer to the data of a list
 * Return: The address of a new element if success
 * Othewise NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (!head)
		return (NULL);
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = str_len(str);
	new->next = *head;
	*head = new;
	return (*head);
}
