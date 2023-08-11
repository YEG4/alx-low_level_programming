#include <stdio.h>

/**
 * main - Entry point
 * Description: 'prints string on the console.'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 122; i >= 97; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
