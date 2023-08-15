#include <stdio.h>

/**
 * print_to_98 - function
 * @n: number to be printed first till 98.
 *
 * Description: 'Prints natural numbers starting from n.'
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%i", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%i", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
}
