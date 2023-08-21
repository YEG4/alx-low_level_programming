#include "main.h"

/**
 * print_rev - Prints string in reverse.
 * @s: string to be reversed
 *
 * Description: 'Prints string in reverse on the console.'
 */


void print_rev(char *s)
{
	int counter = 0;

	while (*s != 0)
	{
		counter++;
		s++;
	}
	while (counter != 0)
	{
		_putchar(*s);
		counter--;
		s--;
	}
	_putchar('\n');
}
