#include "main.h"
/**
 *_islower-changes all the alphabets into lower case
 *
 *Return: always returns zero
 */

int _islower(int c)
{
char a = 'a';
for (; a < 'z'; a++)
if (c == a)
return (1);
else
return (0);
}
