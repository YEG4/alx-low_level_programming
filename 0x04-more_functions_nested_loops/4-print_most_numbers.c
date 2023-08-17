#include "main.h"

/**
 * print_most_numbers- prints most of the numbers
 *
 * Description: 'prints string on the console.'
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + 48);

	}
	_putchar('\n');
}
