#include "3-calc.h"
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Description: 'Evaluate expression given to it.'
 * Return:  0 (Success) Otherwise 98 or 99 or 100 (Fail)
 */

int main(int argc, char *argv[])
{
int op1, op2, result;

int (*ptr_func)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
op1 = atoi(argv[1]);
op2 = atoi(argv[3]);
ptr_func = get_op_func(argv[2]);

if (ptr_func)
{
if (op2 == 0 && (*argv[2] == '/' || *argv[2] == '%'))
{
printf("Error\n");
exit(100);
}
result = ptr_func(op1, op2);
printf("%d\n", result);
return (0);
}
printf("Error\n");
exit(99);
}
