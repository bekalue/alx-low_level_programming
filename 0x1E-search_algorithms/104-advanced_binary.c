#include "search_algos.h"

/**
 * _print - prints the contents of an array/[sub]array that is passed
 * @array: passed array to print
 * @first_idx: the first index of the array.
 * @last_idx: the last index of the array.
 */
void _print(int *array, size_t first_idx, size_t last_idx)
{
	if (array)
	{
		size_t p;

		printf("Searching in array: ");
		for (p = first_idx; p < (first_idx + (last_idx - first_idx + 1)); p++)
			printf("%d%s", array[p], p < first_idx +
					(last_idx - first_idx) ? ", " : "\n");
	}
}
/**
 * binary_search_recursive - searches recursively for a value in a sorted
 *			     array of integers using binary search.
 *
 * @array: A pointer to the first element of the [sub]array to search.
 * @first_idx: the starting index of the [sub]array to search.
 * @last_idx: the ending index of the [sub]array to search.
 * @value: the value to search for.
 *
 * Return: if the value is not present, -1,
 *	   otherwise, the index where the value is located.
 */
int binary_search_recursive(int *array, size_t first_idx,
		size_t last_idx, int value)
{
	size_t mid;

	if (!array)
		return (-1);
	_print(array, first_idx, last_idx);
	mid = first_idx + ((last_idx - first_idx) / 2);
	if (first_idx == last_idx)
		return (*(array + mid) == value ? (int)mid : -1);
	if (value < *(array + mid))
	{
		return (binary_search_recursive(array, first_idx, mid, value));
	}
	else if (value == *(array + mid))
	{
		if ((mid > 0) && (*(array + mid - 1) == value))
		{
			return (binary_search_recursive(array, first_idx, mid, value));
		}
		return ((int)mid);
	}
	else
	{
		return (binary_search_recursive(array, mid + 1, last_idx, value));
	}
}


/**
 * advanced_binary - Searches for a value in a sorted array
 *		     of integers using advanced binary search.
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the index where value is located
 *	   If value is not present in array or if array is NULL,
 *	   function must return -1
 *
 * Description: Every time in split of the array, prints the new array
 *		(or subarray) being searching in by using recursion.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);
	else if ((size == 1) && (*array == value))
		return (0);

	return (binary_search_recursive(array, 0, size - 1, value));
}
