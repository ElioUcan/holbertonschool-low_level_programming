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
int total = 0;
if (argc > 2)
{
for (i = 1; i < argc; i++)
{
total += atoi(argv[i]);
if (total == 0)
{
printf("Error\n");
return (1);
}
}
printf("%i\n", total);
}
else
{
printf("0\n");
}
return (0);
}
