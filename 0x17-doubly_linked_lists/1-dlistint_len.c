#include "lists.h"
/**
 * dlistint_len - a function that returns the number of elements in
 *			a linked dlistint_t list.
 * @h: pointer to the list.
 *
 * Return: number of elements in a list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	if (!h)
		return (elements);

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
