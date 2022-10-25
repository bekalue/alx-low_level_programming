#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: a pointer to the list.
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (!head || !(*head))
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);
	prev = NULL;
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
