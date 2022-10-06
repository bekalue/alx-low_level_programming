#include "main.h"
/**
 * array_range - a function that creates an array of integers containing
 * all the values from min (included) to max (included),
 * ordered from min to max.
 *
 * @min: a minimum number.
 * @max: a maximum number.
 *
 * Return: pointer to the array.
 */
int *array_range(int min, int max)
{
	int *s;
	int i, range;

	if (min > max)
		return (NULL);

	range = (max - min) + 1;

	s = malloc(range * sizeof(int));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < range; i++)
	{
		s[i] = min;
		min++;
	}
	return (s);
}
