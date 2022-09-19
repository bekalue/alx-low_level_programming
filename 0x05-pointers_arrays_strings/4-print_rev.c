#include "main.h"

/**
* print_rev - Reverses a string
* @s: Input string
* Return: String in reverse
**/

void print_rev(char *s)
{
	int i, cont = 0;
	char l = '0';

	if (!(*s != '\0'))
	{
		while (l != '\0')
		{
			cont++;
			l = *(s + cont);
		}
		for (i = cont - 1 ; i >= 0; i--)
		{
			_putchar(*(s + i));
		}
	}
	_putchar('\n');
}
