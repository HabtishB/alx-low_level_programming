#include "lists.h"

/**
 *add_nodeint_end - adds a new node at the end
 *@head: head of the linked list
 *@n: integer
 *
 *Return: returns the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

listint_t *new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = NULL;

if (*head == NULL)
*head = new;

else
{
listint *tmp = *head;
while (*tmp->next != NULL)
{
*tmp = tmp->next;
}

tmp->next = new;
}
return (new);
}
