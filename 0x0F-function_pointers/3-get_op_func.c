#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Call different function on an array.
 * @s: pointer to operator
 *
 * Description: 'Call different function on an array.'
 * Return: address of function that evaluates operator.
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = 
{
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}};
int i;
i = 0;

while (ops[i].f)
{
if (ops[i].f == *s)
{
return (ops[i].op); 
}
i++;
}
return (NULL);
}
