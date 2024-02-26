#include <stdio.h>

/**
 * main - Entry point
 * Description: 'prints string on the console.'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);
	for (i = 97; i <= 122; i++)
	{
		if (i == 'a' || i == 'b' || i == 'c' || i == 'd' || i == 'e' || i == 'f')
			putchar(i);
	}
	putchar('\n');
	return (0);
}
