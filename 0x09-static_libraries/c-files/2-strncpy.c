#include "main.h"

/**
 * _strncpy- copies string from src to dest
 * @dest: destination
 * @src: source
 * @n: bytes to be copied
 *
 * Return: concatenated dest
 */

char *_strncpy(char *dest, char *src, int n)

{
  int j;
  for (j = 0; j < n && src[j] != '\0'; j++)
    dest[j] = src[j];

  for (; j < n; j++)
    dest[j] = '\0';
    return (dest);
}
