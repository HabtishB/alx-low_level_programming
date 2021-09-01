#include <stdio.h>
#include <stdlib.h>
/**
 * main-this defines what the function is about c
 *
 * Return: this function always returns 0
 */
int main(void)
{
char word[9] = "Holberton";
{
int i = 0;
for (; i < 9; i++)
putchar(word[i]);
}
putchar(10);
return (0);
}
