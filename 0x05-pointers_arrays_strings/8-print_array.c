#include "main.h"

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		_puchar(a[index]);
		if (!(index == (n - 1)))
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
