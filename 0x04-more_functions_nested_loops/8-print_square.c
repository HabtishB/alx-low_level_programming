#include "main.h"
/**
 * print_square- prints a sqaure.
 *@size: value of an integer
 *
 * Returns: none.
*/

void print_square(int size)
{
int i;
int j = 0;

while (j < size && size > 0)
{
for (i = 0; i < size; i++)
{
_putchar('#');
}
_putchar('\n');
j++;
}
_putchar('\n');
}
