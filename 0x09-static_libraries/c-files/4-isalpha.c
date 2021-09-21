#include "main.h"

/**
 * _isalpha- check if character is an alphabet
 * @c: integer value
 * 
 * Return: 1 if c is an alphabet, o otherwise
 */

int _isalpha(int c)
{
  if (c >= 65 && c <= 122)
    {
      return (1);
    }
  else
    return (0);
}
