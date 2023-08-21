/**
 * _strcpy- Copies one string and store it in another.
 * @dest: destination string.
 * @src: String to be copied to dest.
 *
 * Description: 'Copies one string and store it in another.'
 */


char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src != 0)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (temp);
}
