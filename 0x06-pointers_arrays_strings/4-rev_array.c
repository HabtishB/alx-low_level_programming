#include "main.h"

/**
 * _strcmp- copies from one to the other
 * @a: is a pointer to an integer
 * @n: is the value of an integer
 *
 * Return: returns the reversed string
 */

void reverse_array(int *a, int n)
{

int j = 0;
int i = n;

while (a[i] >= 0 && a[j] < n)
{
int tmp;
tmp = a[j];
a[j] = a[i];
a[i] = tmp;
i--;
j++;
}

}
