#include "dog.h"

/**
 * print_dog- initializes the struct dog
 * @d: struct dog point
 *
 * Return: returns nothing
 */

void print_dog(struct dog *d)
{
if (d)
{
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %6f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
}
