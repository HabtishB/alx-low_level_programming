#include "lists.h"

/**
 *pop_listint - pops the list
 *@head: head of the linked list
 *
 *Return: data of the node
 */

int pop_listint(listint_t **head)
{
int tmp_nb;

listint_t *to_free = *head;

if (*head == NULL)
return (0);

tmp_nb = to_free->n;
*head = (*head)->next;
free(to_free);

return (tmp_nb);
}
