#include "lists.h"
/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: a pointer to the list.
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		dlistint_t *prev;

		while (head)
		{
			prev = head;
			head = head->next;
			free(prev);
		}
	}
}

