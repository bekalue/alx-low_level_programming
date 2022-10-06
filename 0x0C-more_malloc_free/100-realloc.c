#include "main.h"
/**
 * _memcpy - Copy a string
 * @dest: The destination value
 * @src: The source value
 * @n: The copy limit
 *
 * Return: char value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j;

	j = 0;
	while (n > 0)
	{
		dest[j] = src[j];
		j++;
		n--;
	}
	return (dest);
}
/**
 * _realloc - a function that reallocates a memory block using malloc
 * and free.
 * @ptr: a pointer previously allocated by malloc.
 * @old_size: previously allocated size for ptr.
 * @new_size: new size to be allocated.
 * Return: a pointer with new size.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *s;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	s = malloc(new_size);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	_memcpy(s, ptr, old_size);
	free(ptr);
	return (s);
}
