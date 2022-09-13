#include "main.h"
/**
 * print_alphabet - prints alphabets 10 times.
 *
 * returns: 0 (success)
 */
void print_alphabet_x10(void)
{
	int lines, alphabets;

	lines = 0;
	while (lines < 11)
	{
		alphabets = 'a';
		while (alphabets <= 'z')
		{
			putchar(alphabets);
			alphabets++;
		}
		putchar('\n');
		lines++;
	}
}
