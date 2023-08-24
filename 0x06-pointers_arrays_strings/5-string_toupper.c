/**
 * string_toupper - Changes all lowercase to upper.
 * @s: string to be modified.
 *
 * Description: 'Changes all lowercase letters to uppercase.'
 * Return: Address of string.
 */


char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = s[i];
		else if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return (s);
}
