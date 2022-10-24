#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the list.
 */
void free_listint(listint_t *head)
{
	listint_t *delete;

	if (!head)
		return;
	while (head)
	{
		delete = head;
		head = head->next;
		free(delete);
	}
}
