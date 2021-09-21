#include "main.h"

/**
 *_isupper- check a given char is
 * in the upper or lower case
 * @c: integer value
 * 
 * Return: 1 if c is upper otherwise 0
 */

int _upper(int c)
{
  if (c >= 65 && c <= 90)
    return (1);
  else
    return (0);
}
