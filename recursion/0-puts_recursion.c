#include "main.h"
/**
 * _puts_recursion - prints 
 * @s: string
 * Return: nothing
 */

void _puts_recursion(char *s)
{
int i = 0;
if (s != '\0')
{
_putchar(s[i]);
i++;
_puts_recursion(s);
}
}
