#include "lists.h"

/**
 *print_listint - prints the list
 *@h: head of the linked list
 *
 *Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
int size = 0;

while (h)
{
printf("%d\n", h->n);
size++;
h = h->next;
}
return (size);
}
