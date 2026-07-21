#include "lists.h"

/**
 * print_list -  print a list
 * @h: list
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
size_t count = 0;

if (h == NULL)
{
return (count);
}

while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] [nil]\n");
}
else
{
printf("[%u] %s\n", h->len, h->str);
}
h = h->next;
count++;
}
return (count);
}
