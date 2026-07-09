#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: char
 * @age: float
 * @owner: owner
 * Return: struct pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;

d = malloc(sizeof(dog_t));
if (d == NULL)
{
free(d);
return (NULL);
}
d->name = name;
d->age = age;
d->owner = owner;

return (d);
}
