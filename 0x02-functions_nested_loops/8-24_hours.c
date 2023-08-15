#include "main.h"
/**
 * jack_bauer - Entry point
 * Description: 'Prints every minute in a day.'
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar(48 + (i / 10));
			_putchar(48 + (i % 10));
			_putchar(':');
			_putchar(48 + (j / 10));
			_putchar(48 + (j % 10));
		}
		_putchar('\n');
	}
}
