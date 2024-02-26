/**
 * _memset - Entry point
 * @s: Address
 * @b: constant byte.
 * @n: number of of bytes.
 *
 * Description: 'Write a constant byte strating from address pointed by s.'
 * Return: Address pointed by s .
 */


char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		n--;
		s[i] = b;
	}
	return (s);
}
