#include "main.h"

/**
 * print_triangle- prints a triangle of '#'.
 * @size: number of '#' to be printed
 *
 * Description: 'Prints a triangle on the console'
 */


void print_triangle(int size)
{
	int i, j, counter, counter_size = size;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			counter = i;
			for (j = 0; j < counter_size - 1; j++)
				_putchar(' ');
			counter_size--;
			while (counter != 0)
			{
				_putchar('#');
				counter--;
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
