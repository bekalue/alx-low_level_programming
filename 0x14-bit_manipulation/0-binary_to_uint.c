#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: where b is pointing to a string of 0 and 1 chars (binary).
 *
 * Return: the converted number, or 0 if b is NULL or if
 * there is one or more chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, integer;

	integer = 0;
	i = 0;
	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		integer <<= 1;
		if (b[i] & 1)
			integer += 1;
		i += 1;
	}
	return (integer);
}
