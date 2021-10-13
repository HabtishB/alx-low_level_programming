#include "lists.h"

/**
 *get_nodeint_at_index - adds a new node at the end
 *@head: head of the linked list
 *@n: integer
 *
 *Return: returns the new node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *curr;
unsigned int i;
i = 0;

curr = head;
while (curr)
{
if (i == index)
{
return (curr);
}
curr = curr->next;
i++;
}
return (curr);
}
