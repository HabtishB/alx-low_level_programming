#include "lists.h"

/**
 *print_listint - prints the list
 *@h: head of the linked list
 *
 *Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
int size = 0;

while (h)
{
size++;
h = h->next;
}
return (size);
}
