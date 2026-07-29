#include "hash_tables.h"

/**
 * hash_table_print - prints the hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *temp;

if (ht == NULL)
{
return;
}
temp = ht->array;

while (temp)
{
printf("%s",temp->value);
temp = temp->next;
}
}
