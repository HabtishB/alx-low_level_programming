#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-is the main function.
 *
 * Return: always returns 0 or 1
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int last;
last = n % 10;
if (last > 5)
printf("Last digit of %d is %d and is greater than 5 \n", n, last);
else if (last == 0)
printf("Last digit of %d is %d and is zero \n", n, last);
else
printf("Last digit of %d is %d and less than 6 and not 0 \n", n, last);
return (0);
}
