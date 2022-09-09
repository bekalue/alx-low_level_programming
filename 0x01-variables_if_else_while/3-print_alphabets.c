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

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		putchar(alphabets);
	for (alphabets = 'A'; alphabets <= 'Z'; alphabets++)
		putchar(alphabets);
	putchar('\n');
	return (0);
}
