#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: uli
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *newtable;
newtable = malloc(sizeof(hash_table_t));
if (newtable == NULL)
{
return (NULL);
}
newtable->array = size;

return (newtable);
}
