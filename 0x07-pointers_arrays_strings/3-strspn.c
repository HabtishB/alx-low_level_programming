#include "main.h"


/**
 * _strspn- finds the length of a prefix substring
 * @s: pointer to a string
 * @c: byte to check
 *
 * Return: returns the number of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{

unsigned int i, j, gotit, checking;

gotit = 0;
i = 0;

while (s[i] >= '\0')
{
checking = 0;

for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
gotit++;
checking = 1;
}
}
if (checking == 0)
return (gotit);
i++;
}

return (gotit);
}
