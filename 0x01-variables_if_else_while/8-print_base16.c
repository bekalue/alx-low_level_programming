#include <stdio.h>
/**
 * main - prints hexadecimal characters
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

	while (hexa < 103)
	{
		putchar(hexa);
		hexa++;
	}
	putchar('\n');
	return (0);
}
