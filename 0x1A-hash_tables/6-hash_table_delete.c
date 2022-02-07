#include "hash_tables.h"

/**
 * free_list - frees linked lists
 *
 * @head: head of the linked list
 * Return: no return
 */

void free_list(hash_node_t *head)
{
hash_node_t *tmp1;
hash_node_t *tmp2;

tmp1 = head;

while (tmp1)
{
tmp2 = tmp->next;
free(tmp1->value);
free(tmp1->key);
free(tmp1);
tmp1 = tmp2
}
}

/**
 * hash_table_delete - frees the hash table
 *
 * @ht: hash table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;

for (i = 0; i < ht->size; i++)
{
free_list(ht->array[i]);
}
free(ht->array);
free(ht);
}
