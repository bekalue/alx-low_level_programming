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

	while (a[index] != '\0')
	{
		a_len++;
		index++;
	}

	for (; index < n && a[index] != '\0'; index++)
	{
		int m;

		m = a[index];
		a[index] = a[a_len - index];
		a[a_len - index] = m;

		_printf("%d", a[index]);

		if (index == (n - 1))
			continue;
		printf(", ");
	}
	_putchar('\n');
}
