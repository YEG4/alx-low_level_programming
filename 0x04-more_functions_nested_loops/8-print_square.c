#include "main.h"

/**
 * print_square- prints a line '#'.
 * @n: number of '#' to be printed
 * Description: 'Prints a '#' on the console'
 */


void print_square(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('#');
		}
	}
	_putchar('\n');
}
