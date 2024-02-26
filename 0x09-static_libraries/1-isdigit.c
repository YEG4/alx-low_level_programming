/**
 * _isdigit - checks for digits.
 * @c: number to be checked.
 *
 * Description: 'prints string on the console.'
 * Return: 1 on (Success) 0 on (Fail).
 */


int _isdigit(int c)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (c == (i + 48))
		{
			return (1);
		}
	}
	return (0);
}
