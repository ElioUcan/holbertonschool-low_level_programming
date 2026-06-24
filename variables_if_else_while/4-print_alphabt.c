#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line
 *
 * Return: 0 if correct
 */
int main(void)
{
int i;
for (i = 97; i <= 122 ; i++)
{
if (i != 101 && i != 113)
{
putchar(i);
}
}
putchar('\n');

return (0);
}
