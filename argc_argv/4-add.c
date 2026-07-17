#include "main.h"
/**
 * main - adds positive numbers
 * @argc: int
 * @argv: array of strings
 * Return: 0 if success else 1
 */

int main(int argc, char *argv[])
{

int i;
int j;
int total = 0;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
{
printf("Error\n");
return (1);
}
else if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
{
printf("Error\n");
return (1);
}
}
total += atoi(argv[i]);
}
printf("%i\n", total);
}
else
{
printf("0\n");
}
return (0);
}

