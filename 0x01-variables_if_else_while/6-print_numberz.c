#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char numbers = '0';

	while (numbers < '10')
	{
		putchar(numbers);
		numbers++;
	}
	putchar('\n');
	return (0);
}
