#include "main.h"


/**
 * _memcpy- fills the memory with a chosen constant
 * @dest: pointer to a character
 * @src: byte chosen to fill
 * @n: the length of the characters to be filled
 *
 * Return: returns the pointer to copied character
 */

char *_memcpy(char *dest, char*src, unsigned int n)
{

int i;
int j;
while (n > 0)
{
dest[i] = src[j];
i++;
j++;
n--;
}
return (s);
}
