#include "main.h"

void rev_string(char *s)
{
	int i, sum = 0;

	while (*s != '\0')
	{
		sum++;
		s++;
	}

	for (i = sum; i >=0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
