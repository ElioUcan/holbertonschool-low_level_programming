#include "lists.h"
/**
 * list_len - Returns the number of elements
 * @h: list struct
 * Return: int
 */
size_t list_len(const list_t *h)
{
size_t count = 0;

if (h == NULL)
{
return (count);
}

while (h != NULL)
{
h = h->next;
count++;
}
return (count);
}
