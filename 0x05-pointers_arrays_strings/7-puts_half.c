#include "main.h"
/**
 * puts_half - half of a string.
 * @str: string to be printed.
*/
void puts_half(char *str)
{
	int index = 0, length = 0, n;

	while (str[index++])
	{
		length++;
	}
	n = (length - 1) / 2;

	if (length % 2 == 0)
	{
		for (index = length / 2; index < length; index++)
			_putchar(str[index]);
	}
	else
	{
		for (index = (n + 1); index < length; index++)
			_putchar(str[index]);
	}
	_putchar('\n');
}
