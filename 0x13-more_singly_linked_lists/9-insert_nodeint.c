#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a node at the index
 *@head: head of the linked list
 *@idx: index
 *@n: integer
 *
 *Return: number of nodes
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *current;
listint_t *newNode;
unsigned int i;

newNode = malloc(sizeof(listint_t));

if (!head || !newNode)
return (NULL);

newNode->n = n;

if (!idx)
{
newNode->next = *head;
*head = newNode;
return (newNode);
}
current = *head;
while (current)
{
if (i == idx - 1)
{
newNode->next = current->next;
current->next = newNode;
return (newNode);
}
i++;
current = current->next;
}
free(newNode);
return (NULL);
}
