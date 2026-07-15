#include "variadic_functions.h"

/**
 * print_char - prints char
 * @args: va_list
 * Return: nothing
 */
void print_char(va_list args)
{
printf("%c", va_arg(args, char *));
}

/**
 * print_int - prints int
 * @args: va_list
 * Return: nothing
 */
void print_int(va_list args)
{
printf("%i", va_arg(args, int));
}

/**
 * print_float - prints float
 * @args: va_list
 * Return: nothing
 */
void print_float(va_list args)
{
printf("%f", va_arg(args, float));
}

/**
 * print_string - prints string
 * @args: va_list
 * Return: nothing
 */
void print_string(va_list args)
{
if (args != NULL)
{
printf("%s", va_arg(args, char *));
}
}


/**
 * print_all - prints all
 * @char *: list
 * @format: format of the string.
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
va_list words;
int i = 0;
int j = 0;
char *separator = "";

print_type printTypes[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_string}
};


va_start(words, format);

while (format && format[i] != '\0')
{
j = 0;
while (j < 4)
{
if (format[i] == *(printTypes[j].symbol))
{
printf("%s", separator);
printTypes[j].print_func(words);
separator = ", ";
}
j++;
}
i++;
}



va_end(words);
putchar('\n');
}
