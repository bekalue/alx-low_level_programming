#include "main.h"

/**
* print_rev - Reverses a string
* @s: Input string
* Return: String in reverse
**/

void print_rev(char *s)
{
	int length = 0;
	int x;

	if (!(*s == '\0'))
	{
		while (*s != '\0')
		{
			length += 1;
			s++;
		}
		for (x = length - 1; x >= 0; x--)
		{
			_putchar(*(s + x));
		}
		_putchar('\n');
	}
}
