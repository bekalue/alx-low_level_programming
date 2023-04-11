#include "search_algos.h"

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
	size_t half, i;

	if (first_idx > last_idx || !array)
		return (-1);

	printf("Searching in array: ");
	i = first_idx;
	while (i <= last_idx)
	{
		printf("%d", array[i]);
		if (i != last_idx)
			printf(", ");
		i++;
	}
	printf("\n");

	half = (first_idx + last_idx) / 2;

	if (value > array[half])
		return (binary_search_recursive(array, half + 1, last_idx, value));
	if (value < array[half])
		return (binary_search_recursive(array, first_idx, half - 1, value));
	else
	{
		if (array[half] == value && (half == first_idx || array[half - 1] != value))
			return (half);
		else
			return (binary_search_recursive(array, first_idx, half, value));
	}
	return (-1);
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

	return (binary_search_recursive(array, 0, size - 1, value));
}
