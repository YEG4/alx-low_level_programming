#include "main.h"
#include <unistd.h>

/**
 * get_endianness - Check if it's Big or litte endian
 *
 * Description: Check if it's Big or litte endian
 * Return: 1 or 0.
 */
int get_endianness(void)
{
	int number;
	char c = 'A';
	number = 8;
	if (*(int *)&number == 8)
		return (1);
	else
		return (0);
	write(1, &c,1);
}
