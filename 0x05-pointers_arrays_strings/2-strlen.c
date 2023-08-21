/**
 * _strlen - Counts number of characters in a string.
 * @s: string to be counted.
 *
 * Description: 'Counters charactes in a given string.'
 * Return: integer (number of characters.)
 */


int _strlen(char *s)
{
	int counter = 0;

	while (*s != 0)
		counter++;
	return (counter);
}
