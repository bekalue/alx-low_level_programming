#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 *		 using the Jump search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located
 *	   If value is not present in array or if array is NULL,
 *	   function must return -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jumps, low = 0, high = 0, i;

	if (array)
	{
		jumps = (size_t)sqrt(size);
		for (; (high < size) && (array[high] < value); low = high, high += jumps)
			printf("Value checked array[%d] = [%d]\n", (int)high, array[high]);

		printf("Value found between indexes [%d] and [%d]\n", (int)low, (int)high);
		high = high >= size ? size - 1 : high;
		for (i = low; i <= high && array[i] <= value; i++)
		{
			printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
			if (array[i] == value)
				return ((int)i);
		}
	}
	return (-1);
}
