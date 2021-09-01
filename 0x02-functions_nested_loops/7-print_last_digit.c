#include "holberton.h"
#include "main.h"
/**
 *main-check the code for ALX students
 *
 *Return: always returns zero
 */

int print_last_digit(int c)
{
  char d = c % 10;
  if (d > 0)
    {
      _putchar('0' + d);
      return (d);
    }
  else
    {
      _putchar('0' + (-1 * d));
      return (-1 * d);
    }
}
