/**
 * _strcmp - Compares 2 strings.
 * @s1: first string
 * @s2: second string
 *
 * Description: 'Compares 2 strings.'
 * Return: positive number if s1 > s2.Negative number if s2 > s1.0 if s1 = s2.
 */


int _strcmp(char *s1, char *s2)
{
	int counter1 = 0, counter2 = 0, value;

	while (*s1 != 0)
	{
		counter1++;
		s1++;
	}
	while (*s2 != 0)
	{
		counter2++;
		s2++;
	}
	if (counter1 > counter2)
		value = 1;
	else if (counter1 < counter2)
		value = -1;
	else
		value = 0;
	return (value);
}
	
