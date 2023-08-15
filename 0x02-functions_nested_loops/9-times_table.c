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
			if (i * j > 9)
			{
				_putchar((i * j) / 10 + 48);
				_putchar((i * j) % 10 + 48);
			}
			else
			{
				_putchar(30);
				_putchar((i * j) % 10 + 48);
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
