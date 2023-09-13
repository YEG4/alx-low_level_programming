/* #include "function_pointers.h"
#include <stdlib.h> */
/**
 * print_name - Prints the first argument to console.
 * @name: pointer to char.
 * @f: pointer to function that takes a char and returns nothing.
 *
 * Description: 'prints string on the console.'
 */

/* void print_name(char *name, void (*f)(char *))
{
if (name == 0 || f == 0)
return;
f(name);
} */
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
