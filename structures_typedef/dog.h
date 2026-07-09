#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - dog.
 * @name: name of the dog.
 * @owner: name of the owner.
 * @age: age of the dog.
 */
typedef struct dog
{
char *name;
char *owner;
float age;
} Dog;

typedef struct dog_t
{
Dog dog;
} Dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
