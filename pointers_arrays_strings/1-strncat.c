#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: n bytes 
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n) 
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
i++;
}
while (n >= 0)
{
dest[i] = src[j];
i++;
j++;
}

dest[i] = '\0';

return (dest);
}