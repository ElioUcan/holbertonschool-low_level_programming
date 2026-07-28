#include "lists.h"


/**
 * accom - accomodates a node
 * @temp: unsigned int
 * @h: node
 * @n: int
 * @newnode: node
 * Return: node
 */
dlistint_t *accom(dlistint_t *temp, dlistint_t **h, int n, dlistint_t *newnode)
{

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
dlistint_t *temp;
dlistint_t *newnode;

if (h == NULL)
return (NULL);

temp = *h;
newnode = malloc(sizeof(dlistint_t));

if (newnode == NULL)
return (NULL);

if (idx == 0)
{
newnode->n = n;
newnode->prev = NULL;
newnode->next = *h;
*h = newnode;
return (newnode);
}

while (temp != NULL)
{
if (i == idx)
{
return (accomodate_node(temp, *h, n, newnode));
}
if (i == idx - 1 && temp->next == NULL)
{
newnode->next = NULL;
newnode->prev = temp;
temp->next = newnode;
return (newnode);
}
temp = temp->next;
i++;
}
free(newnode);
return (NULL);
}
