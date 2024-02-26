#include "main.h"

/**
 * more_numbers- prints numbers from 0 to 14.
 *
 * Description: 'prints numbers from 0 to 14.'
 */

void more_numbers(void)
{
	int i, num, j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			num = i;
			if (num > 9)
			{
				_putchar(49);
				num = i % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
