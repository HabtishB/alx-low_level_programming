#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table pointer
 * @key: key to search or store
 * @value: value to store
 * Return: 1 Success, 0 Fail
 **/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
unsigned long int hash;
hash_node_t *node, *mark;
char *val, *k;

if (!ht || !key || !value || key[0] == '\0')
return (0);

hash = hash_djb2((unsigned char *)key);
index = hash % ht->size;
val = strdup(value);
mark = ht->array[index];

while (mark && strcmp(key, mark->key) != 0)
mark = mark->next;

if (mark)
{
free(mark->value);
mark->value = val;
}
else
{
k = strdup(key);
node = malloc(sizeof(hash_node_t));
if (node == NULL)
return (0);

node->key = k;
node->value = val;
node->next = ht->array[index];
ht->array[index] = node;
}
return (1);
}
