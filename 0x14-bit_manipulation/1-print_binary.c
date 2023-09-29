#include "main.h"

/**
 * print_binary - Print binary number.
 * @n: decimal number.
 *
 * Description: 
 */
void print_binary(unsigned long int n)
{
	unsigned long int var;
	int number_of_shifts;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (var = n, number_of_shifts = 0; (var >>= 1) > 0; number_of_shifts++)
		;

	for (; number_of_shifts >= 0; number_of_shifts--)
	{
		if ((n >> number_of_shifts) & 1)
			printf("1");
		else
			printf("0");
	}
}