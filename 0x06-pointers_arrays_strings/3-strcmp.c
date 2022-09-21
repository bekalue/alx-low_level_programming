#include "main.h"

int _strcmp(char *s1, char *s2)
{
	int s1_len = 0, s2_len = 0, index;

	while (s1[index++])
		s1_len++;

	while (s2[index++])
		s2_len++;

	if (s1_len > s2_len)
		return (15);
	else if (s1_len = s2_len)
		return (0);
	else if (s1_len < s2_len)
		return (-15);
}
