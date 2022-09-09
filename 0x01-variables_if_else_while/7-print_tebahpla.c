#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int reverse_alphabet = 'z';

	while (reverse_alphabet >= 'a')
	{
		putchar(reverse_alphabet);
		reverse_alphabet--;
	}
	putchar('\n');
	return (0);
}
