#include "main.h"
/**
 * _memset - fills memory
 * @s: pointer to fill
 * @b: constant byte b
 * @n: number of bytes to be filled
 *
 * Return: pointer
 */


char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
while (n != 0)
{
s[i] = b;
n--;
i++;
}

return (s);
}
