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
newnode->next = NULL;
if (*head == NULL)
{
newnode->prev = NULL;
*head = newnode;
return (newnode);
}


while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = newnode;


newnode->prev = temp;
return (newnode);
}
