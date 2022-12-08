#include "lists.h"
/**
 * add_dnodeint_end - a function that adds a new node at the end of
 *			a dlistint_t list.
 * @head: a pointer to the pointer of the list.
 * @n: a data value to be added to newly created element.
 * Return: newly added element.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *last_node = NULL;

	if (head)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node)
		{
			last_node = *head;
			while (last_node && last_node->next)
				last_node = last_node->next;

			new_node->n = n;
			new_node->next = NULL;
			new_node->prev = last_node;

			if (last_node)
				last_node->next = new_node;

			if ((*head) == NULL)
				(*head) = new_node;
		}
	}
	return (new_node);
}
