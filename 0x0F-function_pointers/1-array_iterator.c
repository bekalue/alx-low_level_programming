#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given
 * as a parameter on each element of an array.
 * @array: a pointer to an array of integers.
 * @size: the size of a n array.
 * @action: a pointer to a function.
 *
 * Return: nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);/* or i could use (*action(array[i]);*/
	}
}
