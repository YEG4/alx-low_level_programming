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
	if (argc > 0 && argc <= 2)
	{
		printf("%d\n", argv[1] * argv[2]);
		return (argv[1] * argv[2]);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
