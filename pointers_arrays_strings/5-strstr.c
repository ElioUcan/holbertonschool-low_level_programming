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

if (haystack == NULL || needle == NULL)
{
return (NULL);
}

while (needle[i] != '\0')
{
i++;
}


while (haystack[j] != '\0')
{
if (haystack[j] == needle[j])
{
i--;
}
j++;
}
if (i == 0)
{
return (needle);
}

return (NULL);
}
