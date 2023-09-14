#include "variadic_functions.h"
/**
 * print_all - print all arguments passed to it.
 * @format: pointer to char.
 *
 * Description: 'Adds all arguments .'
 */

void print_all(const char * const format, ...)
{
char *string, *separator = "";
unsigned int i;
va_list args;
va_start(args,format);

i = 0;
if (format)
{
while (format[i] != 0)
{
switch (format[i])
{
case 'c':
printf("%s%c", separator, va_arg(args,int));
break;
case 'i':
printf("%s%d", separator, va_arg(args,int));
break;
case 'f':
printf("%s%f", separator, va_arg(args,double));
break;
case 's':
string = va_arg(args, char *);
if (string == 0)
string = "(nil)";     
printf("%s%s", separator, string);
break;
default:
i++;
break;
}
i++;
separator = ", ";
}
}
va_end(args);
printf("\n");
}
