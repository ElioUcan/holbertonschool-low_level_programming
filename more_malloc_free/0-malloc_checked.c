#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked -  allocates memory using malloc.
 * @b: unsingned int
 * Return: nothing
 */


void *malloc_checked(unsigned int b)
{
int *p = malloc(b);
if (p == NULL)
{
exit(98);
}
}
