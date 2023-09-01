/**
 * _strncat- concatentates two strings.
 * @dest: destination string.
 * @src: source string to be concatenated to dest.
 * @n: number of bytes to be printed
 *
 * Description: 'Concatenates two strings'
 * Return: Address of dest.
 */


char *_strncat(char *dest, char *src, int n)
{
	char *start_dest = dest, *start_src = src;
	int counter = 0, i;

	while (*src != 0)
	{
		counter++;
		src++;
	}
	while (*dest != 0)
		dest++;
	if (n >= counter)
	{
		while (*start_src != 0)
		{
			*dest = *start_src;
			start_src++;
			dest++;
		}
		*dest = 0;
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			*dest = *start_src;
			start_src++;
			dest++;
		}
		*dest = 0;
	}
	return (start_dest);
}
