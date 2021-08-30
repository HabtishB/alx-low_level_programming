#include <stdio.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <string.h>
/**
 * main-function: Entry point
 *
 * Return:always returns 0 always
*/
int main(void)
{
write(1, "and that piece of art is useful \"- Dora Korpar, 2015-10-19\n", strlen("and that piece of art is useful \"- Dora Korpar, 2015-10-19\n"));
return (0);
}
