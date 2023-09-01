#include <stdio.h>

/**
 * main - Entry point
 * @argc: arguement count.
 * @argv: arguement vector.
 *
 * Description: 'Prints name of file on console.'
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	while (argc > 0)
	{
		printf("%s\n", argv[argc]);
		argc--;
	}
	return (0);
}
