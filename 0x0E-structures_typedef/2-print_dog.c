#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog- initializes the struct dog
 * @d: struct dog point
 *
 * Return: returns nothing
 */

void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->name != NULL)
print ("Name: %s\n", d->name);

else
print("Name: (nil)");
print("Age: %6f\n", d->age);

if (d->owner != NULL)
printf("Owner: %s\n", d->owner);

else
printf("Owner: (nil)\n");
}
}
