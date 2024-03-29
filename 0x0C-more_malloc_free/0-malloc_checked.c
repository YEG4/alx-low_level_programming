#include "main.h"

/**
 * malloc_checked - allocates memory using malloc, exit(98) if it fails
 * @x: size of the memory block to be allocated
 *
 * Return: pointer to the address of the memory block
 */
void *malloc_checked(unsigned int x)
{
	void *ptr;

	ptr = malloc(x);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
