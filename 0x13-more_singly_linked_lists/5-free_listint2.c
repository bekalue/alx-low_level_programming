#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 * @head: a pointer to a pointer of list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *prev;

	while (temp)
	{
		prev = temp;
		temp = temp->next;
		free(prev);
	}
	*head = NULL;
}
