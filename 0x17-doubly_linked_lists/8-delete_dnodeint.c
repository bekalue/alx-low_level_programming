#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes a node at a given
 *				position in a dlistint_t list.
 * @head: The pointer to the head node's address.
 * @index: The 0-based position of the node to delete
 *
 * Return: 1 if the deletion was successful, otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *at_node = NULL;
	size_t i;

	if (head)
	{
		at_node = *head;
		while (at_node && i != index)
		{
			i++;
			at_node = at_node->next;
		}
		if (i == index)
		{
			if (i == 0)
				*head = at_node->next;
			if (at_node->next)
				at_node->next->prev = at_node->prev;
			if (at_node->prev)
				at_node->prev->next = at_node->next;
			free(at_node);
			return (1);
		}
	}

	return (-1);
}
