#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in
 *				a dlistint_t list.
 * @h: the pointer to the head node's address
 * @idx: the position at which to add the new node.
 * @n: the item to store in the new node.
 *
 * Return: a pointer to the new node or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *at_node = NULL;
	size_t i = 0;

	if (h)
	{
		at_node = *h;
		while (at_node && i != idx)
		{
			i++;
			at_node = at_node->next;
		}
		if (i == idx)
		{
			if (!at_node)
				return (add_dnodeint_end(h, n));
			new_node = malloc(sizeof(dlistint_t));
			if (new_node)
			{
				new_node->n = n;
				new_node->next = at_node;
				if (at_node->prev)
				{
					at_node->prev->next = new_node;
					new_node->prev = at_node->prev;
				}
				at_node->prev = new_node;
				if (i == 0)
					*h = new_node;
			}
		}
	}
	return (new_node);
}
