#include "main.h"

char *string_toupper(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		if (s[index] >= 'a' && s[index] <= 'z')
			s[index] += 32;
	}

	return (s);
}
