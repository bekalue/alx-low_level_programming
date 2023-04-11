#include <math.h>
#include "search_algos.h"

/**
 * get_next_node - gets nth node next to the given node.
 * @node: The starting node.
 * @jumps: the number of postions after the required node
 *	   to be returned.
 *
 * Return: The node n places next to the given node,
 *	   otherwise the last node or NULL.
 */
listint_t *get_next_node(listint_t *node, size_t jumps)
{
	size_t jump = 0;
	listint_t *next_node = node;

	for (; (jump < jumps) && next_node && (next_node->next); jump++)
		next_node = next_node->next;
	return (next_node);
}
/**
 * jump_list - searches for a value in a sorted list of integers
 *		using the Jump search algorithm
 * @list: is a pointer to the head of the list to search in
 * @size: is the number of nodes in list
 * @value: is the value to search for
 *
 * Return: a pointer to the first node where value is located
 *	   If value is not present in head or if head is NULL,
 *	   function must return NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jumps, first_idx = 0, last_idx = 0;
	listint_t *node, *next_node;

	if (list)
	{
		jumps = (size_t)sqrt(size);
		node = list;
		next_node = get_next_node(node, jumps);
		while (node)
		{
			printf("Value checked at index [%d] = [%d]\n",
					(int)next_node->index, next_node->n);
			if ((next_node->n >= value) || (!next_node->next))
				break;
			node = next_node;
			next_node = get_next_node(node, jumps);
		}
		first_idx = node->index;
		last_idx = next_node->index;
		printf("Value found between indexes [%d] and [%d]\n",
				(int)first_idx, (int)last_idx);
		while (node)
		{
			printf("Value checked at index [%d] = [%d]\n", (int)node->index, node->n);
			if (node->n == value)
				return (node);
			node = node->next;
		}
	}
	return (NULL);
}
