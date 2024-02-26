#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: a decimal number.
 *
 * Description: 'Prints sign of a number.'
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	long int value;

	if (n > 0)
	{
		value = n % 10;
		_putchar(value + 48);
	}
	else if (n < 0)
	{
		value = -1 * (n % 10);
		_putchar(value + 48);
	}
	else
	{
		value = 0;
		_putchar(value + 48);
	}
	return (value);
}
