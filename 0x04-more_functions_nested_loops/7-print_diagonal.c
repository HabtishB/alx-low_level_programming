#include "main.h"
/**
 * print_diagonal- prints a diagonal
 * @n: value of an integer
 *
 * Returns: none.
*/

void print_diagonal(int n)
{
int i;
int j;
for (i = 0; i < n; i++)
{
for (j = 0; j <= i; j++)
{
if (j == i)
_putchar('$')
else
_putchar(' ')
}
_putchar('\n');
}
}
