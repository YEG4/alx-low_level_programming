#include "main.h"

/**
 * print_square- prints a line '#'.
 * @size: number of '#' to be printed
 * Description: 'Prints a '#' on the console'
 */


void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
