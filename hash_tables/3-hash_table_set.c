#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: char
 * @value: char
 * Return: 1 good, 0 bad
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int idx = key_index((const unsigned char *)key, ht->size);
hash_node_t *temp = ht->array[idx];
hash_node_t *new_node = malloc(sizeof(hash_node_t));

if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
{
return (0);
}

while (temp != NULL)
{
if (strcmp(temp->key, key) == 0)
{
free(new_node);
free(temp->value);
temp->value = strdup(value);
return (1);
}
temp = temp->next;
}
if (new_node == NULL)
{
return (0);
}
new_node->key = strdup(key);
new_node->value = strdup(value);
new_node->next = ht->array[idx];
ht->array[idx] = new_node;
return (1);
}
