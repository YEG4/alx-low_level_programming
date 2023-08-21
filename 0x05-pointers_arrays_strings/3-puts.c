/**
 * _puts - Prints string to stdout.
 * @str: String to be printed on the console.
 *
 * Description: 'prints string on the console.'
 */


void _puts(char *str)
{
	while (*str != 0)
	{
		printf("%c", *str);
		str++;
	}
}
