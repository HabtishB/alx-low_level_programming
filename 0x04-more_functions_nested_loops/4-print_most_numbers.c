#include "main.h"
/**
 *print_numbers - prints the numbers from 0 to 9
 *
 *Return: always returns zero.
 */
void print_numbers(void)
{
int i;
 for (i = 48; i <= 57; i++)
{
if ((i != 50) && (i != 52))
_putchar(i);
}
_putchar('\n');
}
