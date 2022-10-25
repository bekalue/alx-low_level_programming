#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: a pointer to the list.
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
    listint_t *prev_ptr;
    listint_t *cur_ptr;

    /* might give an error if accessing NULL */
    if (*head == NULL || (*head)->next == NULL)
        return (*head);
    prev_ptr = *head;
    cur_ptr = (*head)->next;

    while (cur_ptr != NULL)
    {
        (*head)->next = cur_ptr->next;
        cur_ptr->next = prev_ptr;
        prev_ptr = cur_ptr;
        cur_ptr = (*head)->next;
    }
    *head = prev_ptr;

    return (*head);
}