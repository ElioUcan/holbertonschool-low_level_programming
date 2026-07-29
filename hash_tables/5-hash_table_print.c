#include "hash_tables.h"

/**
 * hash_table_print - prints the hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
int f = 0;
hash_node_t *temp;

if (ht == NULL)
{
return;
}
printf("{");
for (i = 0; i < ht->size; i++)
{
temp = ht->array[i];
while (temp)
{
if (f == 1)
{
printf(", ");
}
printf("'%s': '%s'", temp->key, temp->value);
f = 1;
temp = temp->next;
}
}
printf("}\n");
}
