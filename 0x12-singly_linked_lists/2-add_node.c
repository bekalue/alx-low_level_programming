#include "lists.h"
/**
 * @brief 
 * 
 * @param head 
 * @param str 
 * @return list_t* 
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->len = strlen(str);
	new->str = strdup(str);
	new->next = *head;

	*head = new;

	return (new);
}
