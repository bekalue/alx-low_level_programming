#include "main.h"
/**
 * print_alphabet - prints alphabets
 *
 * returns: 0 (success)
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
}
