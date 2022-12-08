#include "lists.h"
/**
 * add_dnodeint - a function that adds a new node at the beginning of
 *			a dlistint_t list.
 * @head: a pointer to the pointer of the list.
 * @n: a data value to be added to the new list.
 *
 * Return: the newly added list member or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	if (head)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node)
		{
			new_node->n = n;
			new_node->prev = NULL;
			new_node->next = (*head);
			if (*head)
				(*head)->prev = new_node;
			(*head) = new_node;
		}
	}
	return (new_node);
}
