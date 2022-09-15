#include "main.h"

void more_numbers(void)
{
	int lines, num1, num2;

	lines = 48;
	while (lines < 58)
	{
		num1 = 48;
		while (num1 < 58)
		{
			_putchar(num1);
			num1++;
		}
		num1 = 49;
		while(num1 < 50)
		{
			num2 = 48;
			while(num2 < 53)
			{
				_putchar(num1);
				_putchar(num2);
				num2++;
			}
			num1++;
		}
		_putchar('\n');
		lines++;
	}
}
