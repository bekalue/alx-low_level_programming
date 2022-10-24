#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth
 * \ node of a listint_t linked list.
 *
 * @head: pointer to the list.
 * @index: nth element to return.
 *
 * Return: nth element.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
			break;
		count++;
		head = head->next;
	}
	return (head);
}
