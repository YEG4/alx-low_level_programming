/**
 * reverse_array - Reverses an array.
 * @a: array to be reversed
 * @n: number of elements in the array
 *
 * Description: 'Reverse an array.'
 */


void reverse_array(int *a, int n)
{
	int i, temp, end = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[end];
		a[end] = temp;
		end--;
	}
}
