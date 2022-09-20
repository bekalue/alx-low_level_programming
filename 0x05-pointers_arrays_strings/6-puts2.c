#include "main.h"

void puts2(char *str)
{
	int length = 0, i;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	for (i = 1; i < length; i += 2)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
