include "main.h"
/**
 *print_alphabet_x10- prints the alphabets ten times
 *
 *Return: always returns zero.
 */

void print_alphabet_x10(void)
{
for (int i = 0; i < 10; i++)
{
for (char a = 'a'; a <= z; a++)
{
_putchar(a);
}
putchar(10);
}
}
