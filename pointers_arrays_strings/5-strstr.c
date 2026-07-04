#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring.
 * @haystack: string
 * @needle: substring
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
int i = 0;
int j = 0;

if (needle[0] == '\0')
{
return (haystack);
}

while (haystack[i] != '\0')
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[j + i] != needle[j])
{
break;
}
}
if (needle[j] == '\0')
{
return (&haystack[i]);
}
i++;
}

return (NULL);
}
