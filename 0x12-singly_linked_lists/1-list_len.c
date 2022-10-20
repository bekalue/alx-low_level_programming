#include "lists.h"

size_t list_len(const list_t *h)
{
	size_t num = 0;

	if (!h)
		return (num);

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
