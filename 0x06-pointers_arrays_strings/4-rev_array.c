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
	int m, index = 0, a_len = 0;

	while (a[index] != '\0')
	{
		a_len++;
		index++;
	}
	
	for (; index < n && index < a_len / 2 ; index++)
	{
		m = a[index];
		a[index] = a[a_len - 1 - index];
		a[a_len - 1 - index] = m;
		_printf("%d", a[index]);
		if (index == (n - 1))
			continue;
		printf(", ");
	}
	printf("\n")
}
