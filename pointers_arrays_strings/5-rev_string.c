#include "main.h"
#include <unistd.h>
/**
 * rev_string - reverses a string
 * @s: char
 * Return: nothing
 */

void rev_string(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
i--;
for (; i >= 0 ; i--)
{
if (s[i] != '\n' && s[i] != '\0')
{
write(1, &s[i], 1);
}
}
write(1, "\n", 1);
}
