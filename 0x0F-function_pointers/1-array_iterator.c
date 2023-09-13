#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - Call different function on an array.
 * @array: array of int.
 * @size: size of the array.
 * @action: pointer to call different functions.
 *
 * Description: 'Call different function on an array.'
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == 0 || action == 0)
{return;}
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
