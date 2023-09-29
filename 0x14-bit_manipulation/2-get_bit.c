#include "main.h"
/**
 * get_bit - return bit at a given index.
 * @n: decimal number.
 * @index: place to retrieve bit.
 *
 * Description: return bit at a given index.
 * Return: number at the index or -1.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	
	return ((n & (~(1 << index))) >> index );
}
