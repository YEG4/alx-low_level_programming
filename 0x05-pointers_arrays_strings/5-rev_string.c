#include <stdio.h>

/**
 * rev_string - Reverse a string.
 * @s: string to be reveresed.
 *
 * Description: 'Reverse a string.'
 */


void rev_string(char *s)
{
	int temp, counter = 0, mid;
	char *ptr = s;

	while (*s != 0)
	{
		counter++;
		s++;
	}
	mid = counter / 2;
	while (counter > mid)
	{
		s--;
		temp = *ptr;
		*ptr = *s;
		*s = temp;
		ptr++;
		counter--;
	}

}
