#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a
 * \ linked list_t list.
 * @h: head node.
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	if (!h)
		return (num);

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
