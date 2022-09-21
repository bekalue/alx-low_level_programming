#include "main.h"

char *_strcat(char *dest, char *src)
{
	int index, dest_len, len = 0;

	while (dest[index++])
	{
		len++;
	}
	dest_len = len;

	for(index = 0; src[index] != '\0';index++)
	{
		dest[dest_len + index] = src[index];
	}
	dest[dest_len + index] = '\0';

	return(dest);
}
