#include "main.h"

/**
 * _abs - Entry point
 * @n: letter to be checked
 *
 * Description: 'Prints sign of a number.'
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	int value;

	if (n > 0)
		value = n;
	else if (n < 0)
		value = -n;
	else
		value = 0;
	return (value);
}
