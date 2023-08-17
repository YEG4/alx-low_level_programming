#include "main.h"

/**
 * print_number - prints a number that is passed to it.
 * @n: number to be printed.
 *
 * Description: 'prints string on the console.'
 */

void print_number(int n)
{
	if (n >= 0)
	{
		if (n > 9 && n < 100)
		{
			_putchar(n / 10 + 48);
			_putchar(n % 10 + 48);
		}
		else if (n >= 100 && n < 1000)
		{
			_putchar((n / 100) + 48);
			_putchar((n / 10) % 10 + 48);
			_putchar(n % 10 + 48);
		}
		else if (n >= 1000 && n < 10000)
		{
			_putchar((n / 1000) + 48);
			_putchar((n / 100) % 10 + 48);
			_putchar((n / 10) % 10 + 48);
			_putchar(n % 10 + 48);
		}
		else if (n < 9)
			_putchar(i + 48);
	}
	else
	{
			if (n < -9 && n > -100)
		{
			_putchar('-');
			_putchar(n / 10 + 48);
			_putchar(n % 10 + 48);
		}
		else if (n <= -100 && n > -1000)
		{
			_putchar('-');
			_putchar((n / 100) + 48);
			_putchar((n / 10) % 10 + 48);
			_putchar(n % 10 + 48);
		}
		else if (n <= -1000 && n > -10000)
		{
			_putchar('-');
			_putchar((n / 1000) + 48);
			_putchar((n / 100) % 10 + 48);
			_putchar((n / 10) % 10 + 48);
			_putchar(n % 10 + 48);
		}
		else if (n > -9)
			_putchar(i + 48);
	}
}
