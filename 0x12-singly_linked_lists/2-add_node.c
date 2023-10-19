#include "lists.h"

/**
 * add_node - Function that adds a new node
 * at the beginning of a list_t list
 * @head: pointer to a pointer to the head node.
 * @str: pointer to the string
 *
 * Return: Always 0 (success)
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int a;
	char *cp_s;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	cp_s = strdup(str);
	if (cp_s == NULL)
	{
		free(new);
		return (NULL);
	}

	a = 0;
	while (str[a])
	{
		a++;
	}

	new->len = a;
	new->str = cp_s;
	new->next = *head;
	*head = new;

	return (new);
}
