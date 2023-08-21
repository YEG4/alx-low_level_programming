#include <stdio.h>

/**
 * rev_string - Reverse a string.
 * @s: string to be reveresed.
 *
 * Description: 'Reverse a string.'
 */


void rev_string(char *s)
{
	int temp, counter, *ptr = s;

	while (*s != 0)
	{
		counter++;
		s++;
	}
	while(counter > counter / 2)
	{
		temp = *ptr;
		*ptr = *s;
		*s = temp;
		ptr++;
		s--;
	}
	printf("\n");

}
