#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char arr[] = "_putchar";
	int i;

	for (i = 0; arr[i] != '\0'; i++)
		_putchar(arr[i]);
	_putchar('\n');
	return (0);
}
