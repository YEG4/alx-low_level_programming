#include "main.h"

/**
 * more_numbers- prints numbers from 0 to 14.
 *
 * Description: 'prints numbers from 0 to 14.'
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i > 9)
		{
			_putchar(49);
			i %= 10;
		}
		_putchar(i + 48);
	}
	_putchar('\n');
}
