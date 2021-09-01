#include "main.h"
/**
 *print_alphabet_x10- prints the alphabets ten times
 *
 *Return: always returns zero.
 */
void print_alphabet_x10(void)
{
int i = 0;
char a = 'a';
for (; i < 10; i++)
{
for (; a <= 'z'; a++)
_putchar(a);
_putchar('\n');
}
}
