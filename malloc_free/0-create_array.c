#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 *  and initializes it with a specific char.
 * @size: int
 * @c: char
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
return (malloc(size * sizeof(c)));
}
