#include "lists.h"
/* This function can free lists with a loop*/
/*You should go though the list only once*/
/* the function sets the head to NULL*/
/**
* free_listint_safe - frees a linked list safely
* @h: holds a pointer to a pointer of a linked list
* Return: the size of the list that was free’d
*/

size_t free_listint_safe(listint_t **h)
{
	listint_t *slow_ptr, *fast_ptr, *free_ptr;
	size_t size;

	size = 0;

	if (!h || *h == NULL)
		return (0);
	fast_ptr = (*h)->next;
	slow_ptr = *h;

	while (fast_ptr && fast_ptr < slow_ptr)
	{
		free_ptr = slow_ptr;
		fast_ptr = fast_ptr->next;
		slow_ptr = slow_ptr->next;
		size += 1;

		free(free_ptr);
	}
	size += 1;
	free(slow_ptr);
	*h = NULL;
	return (size);
}
