#include "main.h"

void puts2(char *str)
{
	int length = 0, i;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	char put[0] = *str;

	for (i = 0; i < length; i += 2)
	{
		_putchar(put[i]);
	}
	_putchar('\n');
}
