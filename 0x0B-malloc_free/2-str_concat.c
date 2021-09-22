#include "main.h"

/**
 * str_concat- concatenates two strings
 * @s1: a string pointer
 * @s2: a string pointer
 *
 * Return: returns a pointer to the new string
 */

char *str_concat(char *s1, char *s2)
{
char *array;
unsigned int i, j, k = 0, size1 = 1, size2 = 1;

if (s2 == NULL)
return (NULL);

for (i = 0; s1[i]; i++)
size1++;

for (j = 0; s2[j]; j++)
size2++;

int size = size1 + size2;

array = (char *)malloc(size * sizeof(char));

if (size == 1 || array == NULL)
return (NULL);

for (i = 0; s1[i]; i++)
{
array[k] = s1[i];
k++;
}

for (j = 0; s2[j]; j++, k++)
array[k] = s2[j];

array[k + 1] = '\0';
return (array);
}
