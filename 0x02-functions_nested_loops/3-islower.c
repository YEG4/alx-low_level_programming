#include "main.h"

/**
 * _islower - function
 * Description: 'Checks whether the letter is lowercase or not.'
 * Return:  0 (Success) 1 (Fail)
 */

int _islower(int c)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (c == i)
			return 1;
	}
	return 0;
}
