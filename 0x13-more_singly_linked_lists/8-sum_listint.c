#include "lists.h"
/**
 * sum_listint - a function that returns the sum
 * \ of all the data (n) of a listint_t linked list.
 *
 * @head: a pointer to the list.
 * Return: sum of all data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (sum);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
