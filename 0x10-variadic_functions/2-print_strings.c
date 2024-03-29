#include "variadic_functions.h"
/**
 * print_strings - print strings with separator passed to it.
 * @separator: pointer to separator.
 * @n: number of arguments will be passed.
 *
 * Description: 'Adds all arguments .'
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
char *string;
unsigned int i;


va_list args;

va_start(args, n);

for (i = 0; i < n; i++)
{
string = va_arg(args, char *);
if (!string)
string = "(nil)";
if (!separator)
printf("%s", string);
else if (separator && i == 0)
printf("%s", string);
else
printf("%s%s", separator, string);
}

printf("\n");

va_end(args);
}
