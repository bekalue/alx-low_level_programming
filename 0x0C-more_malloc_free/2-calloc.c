#include "main.h"
/**
 * _calloc - a function that allocates memory for an array.
 * @nmemb: number of array elements.
 * @size: size that each element hold.
 * Return: returns a pointer to the allocated memory or NULL if it fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
	{
		free(s);
		return(NULL);
	}

	for (i = 0; i < nmemb; i++)
		s[i] = 0;
	return(s);
}
