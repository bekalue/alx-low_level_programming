#include "main.h"
/**
 * _strcpy - See description
 * @dest: char type string
 * @src: char type string
 * Description: Copy the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 * Return: Pointer to `dest`
*/
char *_strcpy(char *dest, char *src)
{
	int length, index, i;

	while (src[index++])
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[length] = '\0';
	return (dest);
}
