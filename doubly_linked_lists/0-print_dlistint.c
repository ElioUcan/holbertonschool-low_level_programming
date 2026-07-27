#include "lists.h"


/**
 * print_dlistint - calculate the number of nodes
 * @h: lists
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t nodes = 0;

while (h)
{
if (h->prev == NULL)
{
nodes += 1;
printf("%i\n", h->n);
h = h->next;
}
else if (h->next != NULL)
{
printf("%i\n", h->n);
h = h->next;
nodes += 1;
}
else
{
printf("%i\n", h->n);
h = NULL;
}
}

return (nodes);
}
