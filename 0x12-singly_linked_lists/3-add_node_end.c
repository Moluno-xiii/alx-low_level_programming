#include "lists.h"

/**
 * add_node_end - Function adds a new node at the end of a list_t list
 * @head: head of list
 * @str:  string
 * Return: Always 0 (success)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new, *ptr;

	ptr = *head;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new;

	return (new);
}
