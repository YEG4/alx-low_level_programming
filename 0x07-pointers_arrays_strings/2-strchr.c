/**
 * _strchr - Entry point
 * @s: string.
 * @c: character to search for.
 *
 * Description: 'Search for character 'c' in the sting 's''
 * Return: Address of s (Success).  Null (Fail).
 */

char *_strchr(char *s, char c)
{
	int i = 0, found = 0;

	while (s[i] != 0)
	{
		if (s[i] == c)
			found = &s[i];
	}
	return (found);
}
