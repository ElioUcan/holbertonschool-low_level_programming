#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: node
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t nodes = 0;

while (h)
{
if (h->prev == NULL)
{
nodes += 1;
h = h->next;
}
else if (h->next != NULL)
{
nodes += 1;
h = h->next;
}
else
{
nodes += 1;
h = NULL;
}
}

return (nodes);
}
