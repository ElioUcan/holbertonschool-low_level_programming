#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct type - struct for types
 * @symbol: the symbol
 * @print_func: pointer function
 */
typedef struct type
{
char *symbol;
void (*print_func)(va_list);
} print_type;


#endif
