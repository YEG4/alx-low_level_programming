#include <stdio.h>
#include <stdlib.h>

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
	int sum;

	if (argc > 0 && argc <= 2)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		sum = (argv[1] * argv[2]);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
