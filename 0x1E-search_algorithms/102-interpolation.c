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
	size_t low = 0, high = size - 1, pos = 0;

	if (!array)
		return (-1);
	while (array[high] != array[low])
	{
		pos = low + ((double)(high - low) / (array[high] - array[low])
				* (value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%d] is out of range\n", (int)pos);
			break;
		}
		printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (value == array[low] ? (int)low : -1);
}
