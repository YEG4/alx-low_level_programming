#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: letter to be checked
 *
 * Description: 'prints string on the console.'
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
	int i;

	for (i = 65; i <= 90; i++)
	{
		if (c == i)
			return 1;
	}
	return 0;
}
