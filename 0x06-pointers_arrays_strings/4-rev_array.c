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

	for (; index < n; index++)
	{
		m = a[index];
		a[index] = a[a_len - 1 - index];
		a[a_len - 1 - index] = m;
	}
}
