#include "main.h"

/**
 * print_alphabet - prints the alphabert lowercasee
 *
 * Return: nothing
 */

void print_alphabet(void)
{
int i;
for (i = 97; i <= 122; i++)
{
_putchar(i);
}
_putchar('\n');
}


/**
 * main - calls print_alphabet
 *
 * Return: 0 if correct
 */
int main(void)
{
print_alphabet();
return (0);
}
