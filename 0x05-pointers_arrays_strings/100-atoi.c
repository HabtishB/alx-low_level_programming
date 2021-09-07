#include <stdio.h>
#include "main.h"


/**
 * _atoi- converts a string into an integer
 * @s: is a string
 * Description: The number in a string can be preceeded by infinite
 * number of characters
 * All signs are taken into account
 * When there are no numbers or signs that could not be reprsented
 * by integers in the  ASCI-code, return zero.
 * Return: none
 */

int _atoi(char *s)
{

int i = 0;
int j, k;

k = -1;
j = 0;
while (s[i] != '\0')
{
if (s[i] == '-')
k *= -1;

if (s[i] > 47 && s[i] < 58)
{
if (j < 0)
j = (j * 10) - (s[i] - '0');
else
j = (s[i] - '0') * -1;
}
if (s[i + 1] < 48 || s[i + 1] > 57)
break;

i++;
}

if (k < 0)
j *= -1;

return (j);
}
