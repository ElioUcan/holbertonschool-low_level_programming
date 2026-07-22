#include "lists.h"
/**
 * add_node_end - Adds a new node at the beginning of a list_t list.
 * @head: list
 * @str: char
 * Return: list
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *temp;
int i = 0;

if (str != NULL)
{
while (str[i] != '\0')
{
i++;
}
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->str = strdup(str);
new_node->len = i;
new_node->next = NULL;
}
if (*head == NULL)
{
*head = new_node;
}

else
{
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new_node;
}
return (new_node);
}
