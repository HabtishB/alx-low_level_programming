#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key for search
 * Return: string value or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int i;
hash_node_t *tmp;

if (!ht || !key)
return (NULL);

for (i = 0; i < ht->size; i++)
{
while (ht->array[i] != NULL)
{
tmp = ht->array[i];
while (tmp)
{
if (strcmp(tmp->key, key) == 0)
return (tmp->value);
tmp = tmp->next;
}
i++;
}
}
return (NULL);
}
