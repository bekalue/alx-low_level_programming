#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int hexa;

	hexa = 48;

	while (hexa < 58)
	{
		putchar(hexa);
		hexa++;
	}
	hexa = 97;

	while (hexa < 123)
	{
		putchar(hexa);
		hexa++;
	}
	putchar('\n');
	return (0);
}
