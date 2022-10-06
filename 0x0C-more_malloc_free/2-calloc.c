#include "main.h"
/**
 * _memset -  fills the first n bytes of the memory area
 * pointed to by s with the constant byte b.
 * @s: bytes of the memory area.
 * @b: constant byte to replace.
 * @n: number of bytes to be replaced.
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
/**
 * _calloc - a function that allocates memory for an array.
 * @nmemb: number of array elements.
 * @size: size that each element hold.
 * Return: returns a pointer to the allocated memory or NULL if it fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	_memset(s, 0, nmemb * size);
	return (s);
}
