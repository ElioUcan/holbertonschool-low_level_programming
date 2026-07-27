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
dlistint_t *node;

while (head != NULL)
{
if (i == index)
{
node = head;
return (node);
}
head = head->next;
}
return (NULL);
}
