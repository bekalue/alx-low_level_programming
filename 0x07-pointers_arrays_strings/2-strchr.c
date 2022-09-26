#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: string to be used
 * @c: character to be searched for
 * Returns: a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	char *ptr = NULL;
	while (*s = c && *s != NULL)
		ptr=++s;
	return (ptr);
}
