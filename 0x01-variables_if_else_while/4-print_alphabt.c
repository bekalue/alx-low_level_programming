#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alphabets;

	alphabets = 'a';

	while (alphabets <= 'z')
	{
		if (alphabets == 'e')
			continue;
		else if (alphabets == 'q')
			continue;
		putchar(alphabets);
		alphabets++;
	}
	putchar('\n');
	return (0);
}
