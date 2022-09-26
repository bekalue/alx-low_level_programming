#include "main.h"
#include <string.h>

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int i, j;

	for (i = 0; i < strlen(s); i++)
	{
		for (j = 0; j < strlen(j); j++)
		{
			if (s[i] == accept[j])
			{
				length++;
			}
		}
	}
	return (length);
}
