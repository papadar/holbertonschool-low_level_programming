#ifndef MY_DEFINE_H
#define MY_DEFINE_H

#include <stdlib.h>

int (*get_op_func(char *s))(int, int);
/**
 * struct op - Struct op
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

#endif