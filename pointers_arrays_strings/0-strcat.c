#include "main.h"
/**
 * _strcat - concat two strings.
 * @dest: destination
 * @src: source
 * Return: pointer to the dest
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}

dest[i] = '\0';

return (dest);
}
