#include "main.h"

/**
* print_rev - Reverses a string
* @s: Input string
* Return: String in reverse
**/

void print_rev(char *s)
{
	int length = 0;
	int i, temp;

	while (*s != '\0')
	{
		length += 1;
		s++;
	}

	for(i = 0; i < length/2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}

	while (s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
