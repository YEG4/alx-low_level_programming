#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)       
{
	char *new_string;
	unsigned int counter1 = 0, counter2 = 0, size1 = 0, size2 = 0;

	while (s1 && s1[size1])
		size1++;
	while (s2 && s2[size2])
		size2++;

	if (n < size2)
		new_string = malloc(sizeof(char) * (size1 + n + 1));
	else
		new_string = malloc(sizeof(char) * (size1 + size2 + 1));

	if (!new_string)
		return (NULL);

	while (counter1 < size1)
	{
		new_string[counter1] = s1[counter1];
		counter1++;
	}

	while (n < size2 && counter1 < (size1 + n))
		new_string[counter1++] = s2[counter2++];

	while (n >= size2 && counter1 < (size1 + size2))
		new_string[counter1++] = s2[counter2++];

	new_string[counter1] = '\0';

	return (new_string);
}
