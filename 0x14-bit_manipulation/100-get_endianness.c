#include "main.h"

/**
 * get_endianness - Check if it's Big or litte endian
 *
 * Description: Check if it's Big or litte endian
 * Return: 1 or 0.
 */
int get_endianness(void)
{
	int number;

	number = 8;
	if (*(int *)&number == 8)
		return (1);
	else
		return (0);
}
