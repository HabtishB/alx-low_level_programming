#include "main.h"
/**
 * print_trianble- prints a triangle.
 *@size: value of an integer
 *
 * Returns: none.
*/

void print_triangle(int size)
{
int i;
int j = 0;
if (size <= 0)
_putchar('\n');
else
{
  for (; j < size; j++)
{
for (i = (size-1); i >= 0; i--)
{
if (i <= j)
_putchar('#');
else
_putchar(' ');
}
_putchar('\n');
}
}
}
