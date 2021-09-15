#include "main.h"

/**
 * factorial- returns factorial of a number
 * @n: integer value
 *
 * Return: returns factorial
 */

int factorial(int n)
{
if (n == 0 || n == 1)
return (1);

else if (n < 0)
return (-1);

else
return (n * factorial(n - 1));
}
