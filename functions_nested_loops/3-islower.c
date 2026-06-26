#include "main.h"
/**
 * _islower - checks for lowercase
 *@c: integer ASCII for lowercase
 *Return: 1 if lowercase, 0 if not
 */
int _islower(int c)
{
int value = _putchar(c);
if (value >= 97 || value <= 122)
{
return (1);
}
else
{
return (0);
}
}
