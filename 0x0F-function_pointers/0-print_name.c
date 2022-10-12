#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - a function that prints a name.
 * @name: a string thats to be printed.
 * @f: a pointer to a function.
 *
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	f(name);
}
