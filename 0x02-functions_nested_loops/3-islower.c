#include "main.h"
/**
 *_islower-changes all the alphabets into lower case
 *
 *Return: always returns zero
 */

int _islower(int c)
{
if (c > 96 || c < 123)
return (1);
else
return (0);
}
