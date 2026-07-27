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
nodes +=1;
h = NULL;
}


}




}
