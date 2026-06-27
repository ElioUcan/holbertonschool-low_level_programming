#include "main.h"

/**
 * print_last_digit - prints the last number
 * @v: number
 * 
 * Return: Returns the value of the last digit
 */
int print_last_digit(int v)
{
if (v < 0)
{
v *= -1;    
}
return (v % 10);
}
