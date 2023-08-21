/**
 * swap_int - Swaps two integers.
 * @a: first number
 * @b: second number
 *
 * Description: 'Swaps a and b.'
 */


void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
