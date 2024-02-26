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
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			if (i * j > 9)
			{
				_putchar((i * j) / 10 + 48);
				_putchar((i * j) % 10 + 48);
			}
			else
			{
				_putchar(32);
				_putchar((i * j) % 10 + 48);
			}
		}
		_putchar('\n');
	}
}
