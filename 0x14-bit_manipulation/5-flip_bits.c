#include "main.h"

/**
 * flip_bits - flip one number to another
 * @n: first number
 * @m: second number
 *
 * Description: flip one number to another
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int change;
	int count;

	change = n ^ m;
	count = 0;

	while (change)
	{
		count++;
		change &= (change - 1);
	}

	return (count);
}
