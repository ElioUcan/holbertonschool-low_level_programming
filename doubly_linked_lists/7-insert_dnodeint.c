#include "lists.h"


/**
 * accomodate_node - accomodates a node
 * @temp: unsigned int
 * Return: node
 */
dlistint_t *accomodate_node(dlistint_t *temp)
{
dlistint_t *newnode;
if (temp->next == NULL)
{
newnode->next = NULL;
newnode->prev = temp;
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
if (newnode == NULL && idx == 0)
{
return (NULL);
}

newnode->n = n;
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
newnode = accomodate_node(temp);
return (newnode);
}
temp = temp->next;
i++;
}
free(newnode);
return (NULL);
}
