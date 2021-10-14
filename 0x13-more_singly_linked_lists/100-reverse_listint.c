#include "lists.h"

/**
 *reverse_listint - reverses the list
 *@head: head of the linked list
 *
 *Return: the reversed linked list
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *next, *prev = NULL;

while (*head)
{

next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}
*head = prev;
return (*head);
}
