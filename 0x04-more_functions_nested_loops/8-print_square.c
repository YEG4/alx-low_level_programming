#include "main.h"

/**
 * print_square- prints a line '#'.
 * @size: number of '#' to be printed
 * Description: 'Prints a '#' on the console'
 */


void print_square(int size)
{
	int i, j;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (i = 0; i < n; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
