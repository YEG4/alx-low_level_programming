#include "main.h"

/**
 * _isalpha - function
 * @c: letter to be checked.
 *
 * Description: 'Checks whether the letter is lowercase or not.'
 * Return:  0 (Success) 1 (Fail)
 */

int _isalpha(int c)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (c == i || c == i - 32)
			return (1);
	}
	return (0);
}
