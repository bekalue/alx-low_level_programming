#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int i, j;

	for (i = 0; i < strlen(s); i++)
	{
		bool found_match = false;

		for (j = 0; j < strlen(j); j++)
		{
			if (s[i] == accept[j])
			{
				found_match = true;
				break;
			}
			if (!found_match)
				break;
			else
				length++;
		}
	}
	return (length);
}
