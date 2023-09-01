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
	
	if (argc == 1)
		printf("0\n");
	if (argc > 2)
	{
		argv++;
		while (argc--)
		{
			if ('atoi(*argv)' >= 48 && 'atoi(*argv)' <= 57)
				sum += atoi(*argv++);
			else
			{
				printf("Error\n");
				return (1);
			}
		}	
	}
	return (0);
}
