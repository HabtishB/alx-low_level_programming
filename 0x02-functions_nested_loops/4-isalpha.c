#include "holberton.h"
#include "main.h"
/**
 *main-check the code for ALX students
 *
 *Return: always returns zero
 */

int _isalpha(int c)
{
char a = 'a';
char A = 'A';
for ( ; a < 'z'; a++)
  {
    if (c == a)
      return (1);
    else
      return (0);
  }
for ( ; A <= 'Z'; A++)
  {
    if (c == A)
      return (1);
    else
      return (0);
  }
 }