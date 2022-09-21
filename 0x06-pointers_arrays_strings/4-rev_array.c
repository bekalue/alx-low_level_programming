#include "main.h"

void reverse_array(int *a, int n)
{
	int index, a_len = 0;

	while (a[index++])
		a_len++;

	for (index = a_len; index < n && index >= 0; index--)
	{
		_putchar(a[index]);

		if (index == a[0])
			continue;
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
