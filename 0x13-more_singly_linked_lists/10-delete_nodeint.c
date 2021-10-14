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
listint_t *previous;
listint_t *current;
listint_t *delete;
unsigned int i = 0;

current = *head;

if (index == 0 && current != NULL)
{
previous = *head;
*head = current->next;
free(previous);
return (1);
}

if (current == NULL)
return (-1);

while (current != NULL)
{
if (i == (index - 1))
{
previous = current;
current = current->next;
delete = current;
current = current->next;
previous->next = current;
free(delete);
return (1);
}
current = current->next;
i++;
}

return (-1);
}
