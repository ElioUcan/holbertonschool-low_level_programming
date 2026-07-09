#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - initialize dog struct
 * @d: struct
 * @name: char
 * @age: float
 * @owner: char
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
return;
}
d->name = name;
d->age = age;
d->owner = owner;
}
