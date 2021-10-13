#include "lists.h"

/**
 *free_listint2 - frees the list
 *@head: head of the linked list
 *
 *Return: nothing
 */

void free_listint2(listint_t **head)
{

if (head != NULL)
{
listint_t *tmp, *store = *head;

while (store != NULL)
{
tmp = store;
store = store->next;
free(tmp);
}
*head = NULL;
}
else
return;
}
