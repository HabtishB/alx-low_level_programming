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
int c = 48;
for (; c <= 57; c++)
{
putchar(c);
}
putchar(10);
return (0);
}
