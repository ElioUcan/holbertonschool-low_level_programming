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
int sum = 0;
if (argc > 1 && argc > 3)
{
for (i = 0; i < argc; i++)
{
sum += atoi(argv[i]);
}
printf("%i\n", sum);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
