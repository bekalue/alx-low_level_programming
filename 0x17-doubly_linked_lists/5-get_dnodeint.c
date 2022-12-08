#include "lists.h"
/**
 * get_dnodeint_at_index - Retrieves the nth node of a dlistint_t list.
 * @head: the pointer to the head node
 * @index: the index of the node to find.
 *
 * Return: a pointer to the new node or NULL if it failed.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
