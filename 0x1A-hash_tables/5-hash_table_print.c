#include "hash_tables.h"

/**
 * hash_table_print - a function that prints the hash table
 *
 * @ht: hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
int flag = 0;
hash_node_t *tmp;

if (ht)
{
printf("{");
for (i = 0; i < ht->size; i++)
{
tmp = ht->array[i];
while (tmp != NULL)
{
if (!flag)
{
printf("\'%s': \'%s\'", tmp->key, tmp->value);
flag = 1;
}
else
printf(", \'%s\': \'%s\'", tmp->key, tmp->value);
tmp = tmp->next;
}
}
printf("}\n");
}
}
