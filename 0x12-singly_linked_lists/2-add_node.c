#include "lists.h"

/**
 * _strlen - length of a string
 * @s: input char
 *
 * Return: length of a string
 */

int _strlen(char *s)
{
int i = 0;
while (*s)
{
s++;
i++;
}
return (i);
}

/**
 * add_node - adds new nodes to the list
 * @head: address of the new head
 * @str: string to add
 *
 * Return: head
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new_head;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
printf("Error\n");
free(new_node);
return (0);
}
new_node->len = strlen(str);
new_node->next = *head;
*head = new_head;

return (head);
}
