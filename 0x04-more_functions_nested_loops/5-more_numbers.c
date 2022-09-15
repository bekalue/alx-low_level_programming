#include "main.h"

void more_numbers(void)
{
	int lines;
	char num;

	lines = 0;
	while (lines < 10)
	{
		num = 0;
		while (num < 14)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}
			num++;
		}
		_putchar('\n');
		lines++;
	}
}
