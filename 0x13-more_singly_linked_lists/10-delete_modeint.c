#include "lists.h"

/**
 *delete_nodeint_at_index - deletes a node at the index
 *@head: head of the linked list
 *@index: index
 *
 *Return: number of nodes
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current;
listint_t *next;
unsigned int i = 0;

if (!head || !(head))
return (1);

current = *head;

if (!index)
{
*head = current->next;
free(current);
return (0);
}

while (current && i < index - 1)
{
current = current->next;
i++;
}

if (!current || !(current->next))
return (-1);

next = current->next->next;
free(current->next);
current->next = next;

return (0);
}

