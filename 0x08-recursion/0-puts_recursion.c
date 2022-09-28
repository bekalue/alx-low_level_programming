#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: a string to be printed.
 * return: void.
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	_puts_recursion();
	_putchar('\n');
}
