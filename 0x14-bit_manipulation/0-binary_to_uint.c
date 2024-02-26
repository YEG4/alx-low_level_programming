#include "main.h"


/**
 * binary_to_uint - convert a binary number to int
 * @b: pointer to char.
 *
 * Description: convert a binary number to int
 * Return: number in decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, p;
	int width;

	if (b == NULL)
		return (0);

	for (width = 0; b[width]; width++)
	{
		if (b[width] != '0' && b[width] != '1')
			return (0);
	}

	for (p = 1, sum = 0, width--; width >= 0; width--, p *= 2)
	{
		if (b[width] == '1')
			sum += p;
	}

	return (sum);
}
