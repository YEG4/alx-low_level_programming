#include "main.h"

/**
 * puts_half - Prints half of the string.
 * @str: string to be printed.
 *
 * Description: 'Prints the second half of the string.'
 */


void puts_half(char *str)
{
	int counter = 0, mid;
	char *ptr = str;

	while (*ptr != 0)
	{
		counter++;
		ptr++;
	}
	if (counter % 2 == 0)
		mid = counter / 2;
	else
		mid = counter / 2 + 1;
	while (mid != 0)
	{
		str++;
		mid--;
	}
	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
