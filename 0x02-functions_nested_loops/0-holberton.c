#include <stdio.h>
#include <stdlib.h>
#include "_putchar.c"
/**
 * main-this defines what the function is about c
 *
 * Return: this function always returns 0
 */
int main(void)
{
char word[9] = "Holberton";
{
for (int i = 0; i < 9; i++)
_putchar(word[i]);
}
_putchar(10);
return (0);
}
