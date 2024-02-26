#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints its opcodes
 * @argc: Counter of arguments
 * @argv: array holds arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int B, i;
	char *op_codes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	B = atoi(argv[1]);

	if (B < 0)
	{
		printf("Error\n");
		exit(2);
	}

	op_codes = (char *)main;

	for (i = 0; i < B; i++)
	{
		if (i == B - 1)
		{
			printf("%02hhx\n", op_codes[i]);
			break;
		}
		printf("%02hhx ", op_codes[i]);
	}
	return (0);
}
