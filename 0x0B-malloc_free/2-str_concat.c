#include "main.h"
/**
 * str_concat - a function that concatenates two strings.
 * @s1: a string.
 * @s2: a string.
 *
 * Return: s1.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k;

	i = 0;
	while (s1[i])
		i++;

	j = 0;
	while (s2[j])
		j++;

	for (k = 0; k < j; k++)
		s1[i + k] = s2[k];
	s1[i + k] = '\0';

	return (s1);
}
