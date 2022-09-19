#include "main.h"

/**
* print_rev - Reverses a string
* @s: Input string
* Return: String in reverse
**/

void print_rev(char *s)
{
	int length = 0;
	int begin, end;

	while (*s != '\0')
	{
		length += 1;
		s++;
	}

	end = length - 1;

	for (begin = 0; begin < count; begin++)
	{
		r[begin] = s[end];
		end--;
	}
	r[begin] = '\0';

	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
