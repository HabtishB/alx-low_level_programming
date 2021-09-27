#include "main.h"

/**
 * init_dog
 * @d: a pointer to a dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: returns nothing
 */


void init_dog(struct dog *d, char *name, float *age, char *owner)
{
if (d == NULL)
return;

d->name = name;
d->age = age;
d->owner = owner;
}
