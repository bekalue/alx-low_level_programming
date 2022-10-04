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

	i = 0;
	while (s1 && s1[i])
		i++;
	j = 0;
	while(s2 && s2[j])
		j++;

	s = malloc((sizeof(char) * (i + j)) + 1);
	if (s == NULL)
		return (NULL);
	if (s1)
	{
		for (k = 0; k < i; k++)
			s[k] = s1[k];
	}

	if (s2)
	{
		for (m = 0; m < j; m++)
			s[k + m] = s2[m];
	}

	s[k + m] = '\0';

	return (s);
}
