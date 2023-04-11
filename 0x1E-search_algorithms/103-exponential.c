#include "search_algos.h"


/**
 * binary_search_exp - searches for a value in a sorted array of integers
 *			using binary search.
 * @array: a pointer to the first element of the array to search
 * @first_idx: the starting index of the [sub]array to search.
 * @last_idx: the last index of the the [sub]array to search.
 * @value: the value to search for.
 *
 * Return: if the value is not present or the array is NULL, -1.
 *	   Otherwise, the index where the value is located.
 *
 * Description: Prints the [sub]array being searched after each binary search.
 */
int binary_search_exp(int *array, size_t first_idx, size_t last_idx, int value)
{
	size_t half, i;

	if (array)
	{
		while (first_idx <= last_idx)
		{
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

			if (array[half] > value)
				last_idx = half - 1;
			else if (array[half] < value)
				first_idx = half + 1;
			else
				return (half);
		}
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 *			using the Exponential search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located,
 *	   If value is not present in array or if array is NULL,
 *	   function must return -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t low = 0, high;

	if (!array || !size)
		return (-1);

	if (array[low] != value)
	{
		for (low = 1; low < size && array[low] <= value; low = low * 2)
			printf("Value checked array[%d] = [%d]\n", (int)low, array[low]);
	}

	high = size > low ? low : size - 1;
	printf("Value found between indexes [%d] and [%d]\n", (int)low / 2,
			(int)high);
	return (binary_search_exp(array, low / 2, high, value));
}
