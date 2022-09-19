#include "main.h"

/**
* print_rev - Reverses a string
* @s: Input string
* Return: String in reverse
**/

void print_rev(char *s)
{
	char rev[] = s;
	int length = 0;
	int i;

	while (*s != '\0')
	{
		length += 1;
		s++;
	}

	for(i = length; i >= 0; length--)
	{
		_putchar(rev[i]);
	}
}
