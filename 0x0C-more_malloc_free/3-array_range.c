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
	int *ptr, i, j;

	if (max - min < 0)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	for (i = min, j = 0; i <= max; i++, j++)
		ptr[j] = i;
	return (ptr);
}
