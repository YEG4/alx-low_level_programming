#include "variadic_functions.h"
/**
 * print_numbers - print numbers with separator passed to it.
 * @separator: pointer to separator.
 * @n: number of arguments will be passed.
 *
 * Description: 'Adds all arguments .'
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
int number, counter, i;
va_start(args, n);
counter = n;
i = 0;
if (separator == NULL)
{
while (counter != 0)
{
number = va_arg(args, int);
printf("%d ", number);
counter--;
}
}
else
{
while (counter != 0)
{
number = va_arg(args, int);
printf("%d", number);
if (counter != 1)
{
while (separator[i] != 0)
{
printf("%c", separator[i]);
i++;
}
}
counter--;
}
}
printf("\n");
}
