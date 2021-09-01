#include "holberton.h"
/**
 *main-check the code for ALX students
 *
 *Return: always returns zero
 */

int _islower(int c)
{

char a = 'a';
for ( ; a < 'z'; a++ )
  if (c == a)
    return (1);
  else
    return (0);
}
