#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 *		  using the linear search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 *	   If value is not present in array or if array is NULL,
 *	   the function must return -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array)
	{
		while (i < size)
		{
			printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
			if (array[i] == value)
				return (i);
			i++;
		}
	}
	return (-1);
}
