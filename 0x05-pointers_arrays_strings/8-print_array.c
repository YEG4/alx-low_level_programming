#include <stdio.h>

/**
 * print_array- Prints elements in the array.
 * @a: array to be printed
 * @n: number of elements in the array
 *
 * Description: 'Prints elements in the array'
 */


void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
