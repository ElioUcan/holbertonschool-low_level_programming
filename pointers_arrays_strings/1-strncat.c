#include "main.h"
#include <stdio.h>
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
int count = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0' && count <= n)
{
dest[i] = src[j];
j++;
count++;
}


i++;
dest[i] = '\0';

return (dest);
}
