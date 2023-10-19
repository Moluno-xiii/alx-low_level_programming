#include "lists.h"

/**
 * list_len - Function returns the number of elements in
 * a linked list_t list
 * @h: head
 *
 * Return: Always 0 (success)
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr;
	size_t len = 0;

	ptr = h;

	while (ptr)
	{
		ptr = ptr->next;
		len++;
	}
	return (len);
}
