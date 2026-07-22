#include "lists.h"
/**
 * add_node_end - adds a node to the end
 * @head: pointer x2
 * @str: string
 * Return: new node
 */


list_t *add_node_end(list_t **head, const char *str)
{
int i = 0;
list_t *newnode;
list_t *passenger;
passenger = *head;
newnode = malloc(sizeof(list_t));

if (newnode == NULL)
{
return (NULL);
}

while (str[i] != '\0')
{
i++;
}
newnode->str = strdup(str);
newnode->len = i;
newnode->next = NULL;

while (passenger->next != NULL)
{
passenger = passenger->next;
}
passenger->next = newnode;
return (newnode);
}
