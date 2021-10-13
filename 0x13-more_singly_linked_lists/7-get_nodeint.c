#include "lists.h"

/**
 *get_nodeint_at_index - adds a new node at the end
 *@head: head of the linked list
 *@n: integer
 *
 *Return: returns the new node
 */

listint_t *get_nodeint_at_index(listint_t **head, unsigned int n)
{
unsigned int i;
i = 0;

while (head != NULL)
{
if (i == index)
{
return (head);
}
head = head->next;
i++;
}
return (NULL);
}
