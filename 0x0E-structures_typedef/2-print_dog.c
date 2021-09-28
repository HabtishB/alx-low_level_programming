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
print ("Name: %s\n", d->name ? d->name : "(nil)");
print("Age: %6f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
}
