#include "main.h"

/**
 * _memcpy- copies memory area
 * @dest: pointer memory area
 * @src: byte to copy
 * @n: selector
 *
 * Return: the pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
  unsigned int counter;

  for (counter = 0; (src[counter] >= '\0') && (counter < n); counter++)
    {
      dest[counter] = src[counter];
    }
  return (dest);
}
