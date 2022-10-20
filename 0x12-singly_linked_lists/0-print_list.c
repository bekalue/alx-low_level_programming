#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t n = 0;

	if (!h)
		return(n);

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
