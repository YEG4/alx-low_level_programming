/**
 * _strcat- concatentates two strings.
 * @dest: destination string.
 * @src: source string to be concatenated to dest.
 *
 * Description: 'Concatenates two strings'
 * Return: Address of dest.
 */


char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != 0)
		dest++;
	while (*src != 0)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = 0;
	return (start);
}
