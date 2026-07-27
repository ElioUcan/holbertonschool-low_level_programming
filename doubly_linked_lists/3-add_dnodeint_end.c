#include "lists.h"

/**
 * add_dnodeint_end - add a nodes at the end
 * @head: list
 * @n: int
 * Return: node;
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
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


while (temp)
{
if (temp->next != NULL)
{
temp = temp->next;
}
else
{
temp->next = newnode;
*head = newnode;
}

}

return (newnode);
}
