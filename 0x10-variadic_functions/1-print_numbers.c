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
for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(list, int));
		else if (separator && i == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", separator, va_arg(list, int));
	}
va_end(args);
printf("\n");
}
