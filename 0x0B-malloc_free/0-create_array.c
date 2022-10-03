#include "main.h"
/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char.
 * @size: array size.
 * @c: a character used for initialization.
 * Return: NULL if it fails or andress of allocated memory.
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(char) * size);

	if (s == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		*(s + i) = c;
	return (s);
}
