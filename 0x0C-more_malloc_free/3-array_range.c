#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum range of values
 * @max: maximum range of values
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	if (max - min < 0)
		return (NULL);
	int *ptr = malloc((max - min) * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
