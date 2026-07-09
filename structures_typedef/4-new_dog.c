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
int i;
int j;
d = malloc(sizeof(dog_t));
if (d == NULL)
{
return (NULL);
}
while (name[i] != '\0')
{
i++;
}
while (owner[j] != '\0')
{
j++;
}
d->name = malloc((i + 1) * sizeof(char));
if (d->name == NULL)
{
free(d);
return (NULL);
}

d->owner = malloc((j + 1) * sizeof(char));
if (d->owner == NULL)
{
free(d->name);
free(d);
return (NULL);
}

d->name = name;
d->age = age;
d->owner = owner;

return (d);
}
