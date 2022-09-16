#include "main.h"
/**
 * print_line - ada
 * @n: asd
 */
void print_line(int n)
{
	int i;

	i = 0;
	while( i < n)
	{
		if (i != 0)
		{
			_putchar('_');
		}
		i++;
	}
	_putchar('\n');
}
