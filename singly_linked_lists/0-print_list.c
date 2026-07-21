#include "lists.h"

/**
 * print_list -  print a list
 * @h: list
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
size_t count = 0;
while (h->next != NULL)
{
printf("%i\n", *h->str);
*h->str = h->next->str;
count++;
}
printf("[nil]\n");
return (count);
}
