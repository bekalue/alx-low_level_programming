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

	while(alphabets < 'z')
	{
		putchar(alphabets);
		alphabets++;
	}
	alphabets = 'A';

	while(alphabets = 'Z')
	{
		putchar(alphabets);
		alphabets++;
	}
	putchar('\n');
	return (0);
}
