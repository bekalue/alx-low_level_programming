#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s == NULL)
		return (NULL);

	if (s1)
	{
		while (i < len1)
		{
			s[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (len1 + len2))
		{
			s[i] = s2[j];
			i++;
			j++;
		}
	}
	s[i] = '\0';

	return (s);
}
