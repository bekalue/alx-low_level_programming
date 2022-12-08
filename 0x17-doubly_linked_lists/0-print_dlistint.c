#include "lists.h"
/**
 * print_dlistint - a function that prints all the elements of
 *			a dlistint_t list.
 * @h: pointer to the head of the list.
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (nodes);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
