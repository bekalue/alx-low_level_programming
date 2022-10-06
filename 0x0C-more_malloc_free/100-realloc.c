#include "main.h"
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
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return(NULL);
	}
	if (new_size == old_size)
		return (ptr);

	s = malloc(new_size);
	if (s == NULL)
	{
		free(s);
		return(NULL);
	}

	for (i = 0; i < old_size; i++)
	{
		s[i] = ptr[i];
	}
	return(s);
}
