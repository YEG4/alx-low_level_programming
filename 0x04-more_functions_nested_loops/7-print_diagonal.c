#include "main.h"

/**
 * print_diagonal- prints a diagonal line '\'.
 * @n: number of '\' to be printed
 * Description: 'Prints a diagonal line on the console'
 */


void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
