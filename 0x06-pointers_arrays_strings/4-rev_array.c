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
	int m, k, index = 0, a_len = 0;

	while (a[index] != '\0')
	{
		a_len++;
		index++;
	}
	k = (a_len - 1) / 2;

	if (a_len % 2 == 0)
	{
		for (; index < n && index < a_len / 2 ; index++)
		{
			m = a[index];
			a[index] = a[a_len - index];
			a[a_len - index] = m;
			_printf("%d", a[index]);
			if (index == (n - 1))
				continue;
			printf(", ");
		}
	}
	else
	{
		for (; index < n && index < k; index++)
		{
			m = a[index];
                        a[index] = a[a_len - index];
                        a[a_len - index] = m;
                        _printf("%d", a[index]);
                        if (index == (n - 1))
                                continue;
                        printf(", ");
		}
	}
	printf("\n");
}
