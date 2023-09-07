#include <stdlib.h>
#include "main.h"

/**
 * *_memset - populates memory with a constant byte
 * @s: memory to be filled
 * @b: char
 * @n: number of times
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for array
 * @nmemb: number of elements
 * @size: size of element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *string;

	if (nmemb == 0 || size == 0)
		return (NULL);

	string = malloc(size * nmemb);

	if (string == NULL)
		return (NULL);

	_memset(string, 0, nmemb * size);

	return (string);
}
