#include "variadic_functions.h"
/**
 * sum_them_all - Adds all arguments
 * @n: number of arguments.
 *
 *
 * Description: 'Adds all arguments .'
 * Return: Sum.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
int n1, sum = 0, counter;
va_start(args, n);
counter = n;
if (n == 0)
{return (0); }
while (counter != 0)
{
n1 = va_arg(args, int);
sum += n1;
counter--;
}
return (sum);
}
