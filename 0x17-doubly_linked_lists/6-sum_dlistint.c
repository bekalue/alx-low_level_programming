#include "lists.h"
/**
 * sum_dlistint - computes the sum of all the data of a dlistin_t list.
 * @head: the pointer to the head node.
 *
 * Return: The sum of the data in the list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
