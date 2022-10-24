#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes the node
 * \ at index index of a listint_t linked list.
 *
 * @head: a pointer to list pointer.
 * @index: is the index of the node that should be deleted.
 * \ Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev;
	listint_t *temp;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;
	while (temp)
	{
		if (index == 0)
		{
			*head = temp->next;
			free(temp);
			return (1);
		}
		if (count == index)
		{
			prev->next = temp->next;
			free(temp);
			return (1);
		}
		prev = temp;
		temp = temp->next;
		count++;
	}
	return (-1);
}
