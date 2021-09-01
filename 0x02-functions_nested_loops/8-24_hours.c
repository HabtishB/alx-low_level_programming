#include "holberton.h"
#include "main.h"
/**
 *jack_bauer-check the code for ALX students
 *
 *Return: retuns nothing
 */

void jack_bauer(void)
{
  int hrs = 0;
  int mins = 0;

  for (hrs; hrs < 24; hrs++)
    {
      for (mins; mins < 60; mins++)
	{
	  _putchar('0' + (hrs / 10));
	  _putchar('0' + (hrs % 10));
	  _putchar(':');
	  _putchar('0' + (mins % 10));
	  _putchar('0' + (hrs % 10));
	  _putchar('\n');
	}
    }
 }
