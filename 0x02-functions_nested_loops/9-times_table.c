#include "main.h"

/**
 * times_table - function
 * Description: 'Prints times table till 9'
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(i * j + 48);
			if (i * j != 81)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
