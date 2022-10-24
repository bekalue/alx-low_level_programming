#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a pointer to list pointer.
 * @idx: is the index of the list where the new node should be added.
 * \ Index starts at 0
 * @n: a data value of new element.
 *
 * Return:  the address of the new node, or NULL if it failed
 * \ if it is not possible to add the new node at index idx,
 * \ we do not add the new node and return NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *temp, *prev;
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	if (idx == 0 || (*head == NULL))
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	temp = *head;
	while (temp)
	{
		if (count == idx)
			break;
		prev = temp;
		count++;
		temp = temp->next;
	}
	if (idx >= count)
		return (NULL);
	prev->next = new;
	new->next = temp;
	return (new);
}
