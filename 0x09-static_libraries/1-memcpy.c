/**
 * _memcpy - Entry point
 * @dest: Address of destination.
 * @src: Address of source
 * @n: number of of bytes.
 *
 * Description: 'Copies from source to destination.'
 * Return: Address pointed by destination .
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		n--;
		dest[i] = src[i];
	}
	return (dest);
}
