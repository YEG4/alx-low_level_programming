#include "main.h"

/**
 * print_line- prints a line _____.
 * @n: number of '_' to be printed
 * Description: 'Prints a line on the console'
 */


void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
