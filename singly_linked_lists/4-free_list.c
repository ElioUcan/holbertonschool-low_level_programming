#include "lists.h"
/**
 * free_list - frees a list
 * @head: list struct
 * Return: void
 */
void free_list(list_t *head)
{
list_t *pass;

while (head != NULL)
{
pass = head->next;
free(head->str);
free(head);
head = pass;
}

}
