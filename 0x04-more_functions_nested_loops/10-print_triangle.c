#include "main.h"

/**
 * print_triangle- prints a triangle of '#'.
 * @n: number of '#' to be printed
 * Description: 'Prints a triangle on the console'
 */


void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - 1; j++)
				_putchar(' ');
			_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
