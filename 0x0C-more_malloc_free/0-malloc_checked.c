#include "main.h"
/**
 * malloc_checked - a function that allocates memory using malloc.
 *
 * @b: size to be allocated
 *
 * Return: if malloc fails, the malloc_checked function should
 * cause normal process termination with a status value of 98.
 * or Returns a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);
	return (s);
}
