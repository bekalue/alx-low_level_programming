#include "main.h"
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: a string.
 * @s2: a string to concatenate.
 * @n: number of bytes to concatinate from s2.
 * Return: a pointer points to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	s = malloc((len1 + n + 1) * sizeof(char));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (j = 0; j < n; j++)
		s[i + j] = s2[j];
	s[i + j] = '\0';

	return (s);
}
