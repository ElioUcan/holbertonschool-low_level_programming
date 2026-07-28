#include "lists.h"


/**
 * accomodate_node - accomodates a node
 * @temp: unsigned int
 * @h: node
 * @n: int
 * Return: node
 */
dlistint_t *accomodate_node(dlistint_t *temp, dlistint_t **h, int n)
{
dlistint_t *newnode;
newnode = malloc(sizeof(dlistint_t));
if (newnode == NULL)
{
return (NULL);
}
newnode->n = n;
if (temp->next == NULL)
{
newnode->next = NULL;
newnode->prev = temp;
temp->next = newnode;
return (newnode);
}
else if (temp->prev == NULL)
{
newnode->next = temp;
newnode->prev = NULL;
temp->prev = newnode;
*h = newnode;
return (newnode);
}
else
{
newnode->next = temp;
newnode->prev = temp->prev;
newnode->prev->next = newnode;
temp->prev = newnode;
return (newnode);
}
}



/**
 * insert_dnodeint_at_index - inserts a node in a given position
 * @h: node
 * @idx: unsigned int
 * @n: int
 * Return: node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i = 0;
dlistint_t *temp = *h;
dlistint_t *newnode;
newnode = malloc(sizeof(dlistint_t));
if (newnode == NULL)
{
return (NULL);
}

if (*h == NULL && idx == 0)
{
newnode->prev = NULL;
newnode->next = NULL;
*h = newnode;
return (newnode);
}
else
{
return (NULL);
}


while (temp != NULL)
{
if (i == idx)
{
newnode = accomodate_node(temp, *h, n);
return (newnode);
}
temp = temp->next;
i++;
}
free(newnode);
return (NULL);
}
