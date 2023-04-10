#include "search_algos.h"


/**
 * binary_search - searches for a value in a sorted array of integers
 *		   using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located
 *	   If value is not present in array or if array is NULL,
 *	   your function must return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, half, first_idx = 0, last_idx = size - 1;

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
