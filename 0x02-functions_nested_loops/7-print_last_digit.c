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
	int value;

	if (n > 0)
		value = n % 10;
	else if (n < 0)
		value = -n % 10;
	else
		value = 0;
	return (value);
}
