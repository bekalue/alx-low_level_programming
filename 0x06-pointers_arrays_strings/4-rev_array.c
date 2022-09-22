#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int index;
	char m;

	for (index = 0; index < n / 2; index++)
	{
		m = a[index];
		a[index] = a[n - 1 - index];
		a[n - 1 - index] = m;
	}
}
