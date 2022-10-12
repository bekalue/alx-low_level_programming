#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 * @array: a pointer to an array of integers.
 * @size: number of elements or size of an array.
 * @cmp: a pointer to a function.
 *
 * Return: the index of the first element for which the
 * cmp function does not return 0, If no element matches
 * or if size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int returned;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		(returned) = (*cmp)(array[i]);
		if (returned != 0)
			return (i);
	}
	if (returned == 0)
		return (-1);
}
