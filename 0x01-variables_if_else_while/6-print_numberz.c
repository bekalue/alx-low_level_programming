#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers = 48;

	while (numbers < 58)
	{
		putchar(numbers);
		numbers++;
	}
	putchar('\n');
	return (0);
}
