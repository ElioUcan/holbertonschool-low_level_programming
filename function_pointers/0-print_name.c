#include "main.h"
/**
 * print_name - prints a name
 * @name: name
 * @(*f)(char *): pointer function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
int i = 0;
while (name!= '\0')
{
_putchar(name[i]);
i++;
}
}

