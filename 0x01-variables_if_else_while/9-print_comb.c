#include <stdio.h>
#include <stdlib.h>

/**
 * main-is the main function that printts all alphabets in small letters
 *
 * Return:returns always zero
 */
int main(void)
{
int d = 48;
for (; d <= 57; d++)
{
putchar(d);
if (d != 57)
{
putchar(',');
putchar(' ');
}
}
putchar(10);
return (0);
}
