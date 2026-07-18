#include "main.h"
/**
 * _strlen_recursion - prints the length of a string
 * @s: string
 * Return: int
 */
int _strlen_recursion(char *s)
{
int i = 0;
if (*s == '\0')
{
return (i);
}
i++;
_strlen_recursion(s + 1);
}
