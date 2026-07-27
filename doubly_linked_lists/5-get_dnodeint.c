#include "lists.h"

/**
 * get_dnodeint_at_index - gets a n node
 * @head: node
 * @index: int
 * Return: node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *temp = head;

while (temp != NULL)
{
if (i == index)
{;
return (temp);
}
temp = temp->next;
}
return (NULL);
}
