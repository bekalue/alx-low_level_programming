#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int index, dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}

	for (index = 0; index < n && src[index] != '\0'; index++)
		dest[dest_len + index] = src[index];
	dest[dest_len + index] = '\0';

	return(dest);
}
