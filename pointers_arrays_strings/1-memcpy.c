#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: number
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = 0;
while (src[i] != '\0' && n != 0)
{
dest[i] = src[i];
i++;
n--;
}
return (dest);
}
