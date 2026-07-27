#include "lists.h"

/**
 * add_dnodeint - add a nodes
 * @head: list
 * @n: int
 * Return: node;
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newnode;
dlistint_t *temp = *head;

newnode = malloc(sizeof(dlistint_t));
if (newnode == NULL)
{
return (NULL);
}
newnode->n = n;
newnode->next = temp;
newnode->prev = NULL;

if (temp != NULL)
{
temp->prev = newnode;
}
*head = newnode;

return (newnode);

}
