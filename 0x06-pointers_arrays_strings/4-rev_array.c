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
	int index = 0, a_len = 0;
	char m;

	while (a[index] != '\0')
	{
		a_len++;
		index++;
	}

	for (; index < n / 2; index++)
	{
		m = a[index];
		a[index] = a[n - 1 - index];
		a[n - 1 - index] = m;
	}
}
