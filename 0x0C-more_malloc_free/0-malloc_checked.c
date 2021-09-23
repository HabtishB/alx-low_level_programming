#include "main.h"

/**
 * malloc_checked -
 * @b: an integer value
 *
 * Return: returns nothing
 */


void *malloc_checked(unsigned int b)
{

void *ptr;
ptr = malloc(b);

if (ptr == NULL)
exit(98);

return (ptr);
}
