#include "main.h"

/**
 * _strlen- returns the length of the a string
 * @s: a character array
 *
 * Return: returns an integer
 */


int _strlen(char *s)
{

int i = 0;
if (s != NULL)
{
while (s[i] != '\0')
{
i++;
}
return (i);
}
else
return (0);
}


/**
 * string_nconcat- concatenates strings
 * @s1: the first string
 * @s2: the second string
 * @n:  an integer value
 *
 * Return: returns a concatenated string
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{

unsigned int i = 0;
unsigned int j = 0;
unsigned int c1 = 0;
unsigned int c2 = 0;
char *str;
 
c1 = _strlen(s1);
c2 = _strlen(s2);

if (c2 > n)
c2 = n;

str = malloc(sizeof(char) * (c1 + c2 + 1));
if (str == NULL)
{
return (NULL);
}


for (i = 0; i < n; i++)
str[i] = s1[i];

for (j = 0; j < c2; j++)
{
str[i] = s2[j];
i++;
}

str[c1 + c2] = '\0';

return (str);
}
