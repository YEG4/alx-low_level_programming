#include "main.h"

/**
 * puts2- Prints Every other character.
 * @str: string to be printed.
 *
 * Description: 'Prints even index of a string.'
 */


void puts2(char *str)
{
	int counter = 0;

	while (*str != 0)
	{
		if (counter % 2 == 0)
			_putchar(*str);
		counter++;
		str++;
	}
	_putchar('\n');
}
