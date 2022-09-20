#include "main.h"

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		_putchar(a[index]);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
