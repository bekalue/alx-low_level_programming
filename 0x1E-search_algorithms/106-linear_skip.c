#include <math.h>
#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers.
 *		A node of the express lane is placed every index which
 *		is a multiple of the square root of the size of the list
 * @list: is a pointer to the head of the skip list to search in
 * @value: is the value to search for
 *
 * Return: a pointer on the first node where value is located
 *	   If value is not present in list or if head is NULL,
 *	   function must return NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	size_t low = 0, high = 0;
	skiplist_t *node, *next_node;

	if (list)
	{
		node = list;
		next_node = node->express ? node->express : node;
		while (next_node)
		{
			printf("Value checked at index [%d] = [%d]\n",
					(int)next_node->index, next_node->n);
			if (next_node->n >= value)
				break;
			node = next_node;
			if ((node->n < value) && (!node->express))
			{
				while (next_node->next)
					next_node = next_node->next;
				break;
			}
			next_node = node->express ? node->express : node;
		}
		low = node->index;
		high = next_node->index;
		printf("Value found between indexes [%d] and [%d]\n", (int)low, (int)high);
		while (node)
		{
			printf("Value checked at index [%d] = [%d]\n",
					(int)node->index, (int)node->n);
			if (node->n == value)
				return (node);
			node = node->next;
		}
	}
	return (NULL);
}
