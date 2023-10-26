#include "main.h"
/**
 * set_bit - set bit at a given index.
 * @n: pointer to an int.
 * @index: place to set bit.
 *
 * Description: set bit at a given index.
 * Return:1 or -1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n |= (1 << index);
	return (1);
}
