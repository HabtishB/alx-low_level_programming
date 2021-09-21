#include "main.h"
/**
 * _islower- changes all the alphabets into lower case
 *@c : integer value
 * Return: always returns zero
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
