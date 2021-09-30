#ifndef CALC_
#define CALC_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct op- struct op
 *
 * @op: the operator
 * @f: the callback
 */

typedef struct op
{
char *op;
int (*f)(int a, int b);
} op_t;

int op_add(int, int);
int op_mul(int, int);
int op_div(int, int);
int op_sub(int, int);
int op_mod(int, int);
int (*get_op_func(char *s))(int, int);

#endif
