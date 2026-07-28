#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: uli
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *newtable;
unsigned long int i;
newtable = malloc(sizeof(hash_table_t));
if (newtable == NULL)
{
return (NULL);
}
newtable->size = size;

newtable->array = malloc(sizeof(hash_node_t *) * size);
if (newtable->array == NULL)
{
free(newtable);
return (NULL);
}
for (i = 0; i < size; i++)
{
newtable->array[i] = NULL;
}
return (newtable);
}
