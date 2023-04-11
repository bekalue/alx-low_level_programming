#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 *			  using the Interpolation search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located,
 *	   If value is not present in array or if array is NULL,
 *	   function must return -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t high = size - 1, low = 0;
	size_t pos;

	if (array)
	{
		while (low <= high)
		{
			pos = low +
((double)(high - low) / (array[high] - array[low]) * (value - array[low]));
			if (size <= pos)
			{
				printf("value checked array[%d] is out of range\n", (int)pos);
				return (-1);
			}

			printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);
			if (array[pos] < value)
				low = pos + 1;
			else if (array[pos] > value)
				high = pos - 1;
			else
				return (pos);
		}
	}
	return (-1);
}
