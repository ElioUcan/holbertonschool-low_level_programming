#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: number
 * Return: returns a copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (src[i] != '\0')
{
i++;
}

while (i <= n)
{
if (src[j] != '\0')
{
dest[j] = src[j];
j++;
}
else
{
dest[j] = '0';
j++;
}
}
dest[j] = '\n';
return (dest);
}
