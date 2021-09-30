#include "variadic_functions.h"

/**
 * print_numbers - adds all the arguements received
 * @separator: separates the numbers
 * @n: number of arguements
 * ...: list of arguements
 *
 * Return: the sum total
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;

int i;

va_start(ap, n);

for (i = 0; (unsigned int)i < n; i++)
{
printf("%d", va_arg(ap, int));
if ((separator != NULL) && ((unsigned int)i != (n - 1)))
printf("%s", separator);
}
printf("\n");
va_end(ap);
}
