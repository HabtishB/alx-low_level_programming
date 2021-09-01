#include "holberton.h"
#include "main.h"
/**
 *jack_bauer-check the code for ALX students
 *
 *Return: retuns nothing
 */

void times_table(void)
{
  int x = 0;
  int y = 0;

  for (x; x < 10; x++)
    {
      for (y; y < 10; y++)
	{
	  _putchar(x * y);
	  _putchar('  ');
	}
      _putchar('\n');
    }
 }
