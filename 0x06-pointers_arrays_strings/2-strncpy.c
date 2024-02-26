/**
 * _strncpy - Copies string from src to dest.
 * @dest: string to be copied to.
 * @src: string to be copied from.
 * @n: number of bytes to copied to dest.
 *
 * Description: 'Copies string from src to dest'
 * Return: Address of dest.
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
