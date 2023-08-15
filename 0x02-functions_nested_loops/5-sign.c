#include "main.h"

/**
 * print_sign - Entry point
 * @n: letter to be checked
 *
 * Description: 'Prints sign of a number.'
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		_putchar('+');
		value = 1;
	}
	else if (n  < 0)
	{
		_putchar('-');
		value = -1;
	}
	else
	{
		_putchar('0');
		value = 0;
	}
	return (value);
}
