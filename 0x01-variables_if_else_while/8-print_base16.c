#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-is the main function that printts all alphabets in small letters
 *
 * Return:returns always zero
 */
int main(void)
{
int d = 48;
char h = 'A';
for (; d <= 57; d++)
{
putchar(d);
}
for (; h <= 'F'; h++)
putchar(h);
putchar(10);
return (0);
}
