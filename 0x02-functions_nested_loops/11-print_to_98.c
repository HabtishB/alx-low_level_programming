#include "holberton.h"
#include "main.h"
/**
 *print_to_98- prints all the numbers to 98
 *
 *Return: retuns nothing
 */

void print_to_98(int c)
{
  while ((c < 98) || (c > 98))
    {
      if (c < 98)
	{
	  printf("%d, ", c);
	  c++;
	}
      else
	{
	  printf("%d, ", c);
	  c--;
	}
     }
  printf("%d, ", 98)
}
 

