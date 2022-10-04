#include "main.h"
/**
 * str_concat - a function that concatenates two strings.
 * @s1: a string.
 * @s2: a string.
 *
 * Return: concatinated string.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, m;
	char *s;

	i = strlen(s1);
	j = strlen(s2);

	s = malloc(sizeof(char) * (i + j));
	for (k = 0; k < i; k++)
		s[k] = s1[k];
	for (m = 0; m < j; m++)
		s[k + m] = s2[m];
	s[k + m] = '\0';

	return (s);
}
