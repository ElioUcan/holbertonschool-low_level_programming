#include "main.h"
/**
 * main - multiplies two numbers
 * @argc: int
 * @argv: array of strings
 * Return: 0 if success else 1
 */

int main(int argc, char *argv[])
{
int i;
int total = 1;
if (argc > 2)
{
for (i = 1; i < argc; i++)
{
total *= atoi(argv[i]);
}
printf("%i\n", total);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
