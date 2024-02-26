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
	int sum = 0;

	if (argc == 1)
		printf("0\n");
	if (argc > 2)
	{
		argv++;
		while (argc > 1)
		{
			if (**argv >= '0' && **argv <= '9')
				sum += atoi(*argv++);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
