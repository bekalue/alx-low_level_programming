#include "main.h"

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
	return (dest);
}
