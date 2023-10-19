#include "lists.h"

/**
 * print_list - Function prints all the elements of a list_t list
 * @h: head
 *
 * Return: Always 0 (success)
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr;
	size_t length = 0;

	ptr = h;

	while (ptr)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		length++;
	}
	return (length);
}

