#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of
 * \ a listint_t linked list.
 * @head: a pointer to list pointer.
 *
 * Return: returns the head node’s data (n) or (0), if linked list is empty.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *prev, *temp;

	temp = *head;
	if (!temp)
		return (0);
	prev = temp;
	n = temp->n;
	temp = temp->next;
	free(prev);

	*head = temp;
	return (n);
}
