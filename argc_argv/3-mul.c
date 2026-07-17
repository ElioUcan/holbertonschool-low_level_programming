#include "main.h"
/**
 * main - multiplies two numbers
 * @argc: int
 * @argv: array of strings
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
int i;
int sum = 0;
if (argc > 1)
{
for (i = 0; i < argc; i++)
{
sum += atoi(argv[i]);
}
}
printf("%i\n", sum);
return (0);
}
