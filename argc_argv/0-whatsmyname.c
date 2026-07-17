#include "main.h"
/**
 * program_name - prints the name of the program
 * @argc: int
 * @argv: array of strings
 * Return: nothing
 */

void program_name(int argc, char *argv[])
{
if (argc > 0)
{
printf("%s\n", argv[0]);
}
}
