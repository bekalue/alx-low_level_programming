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
	unsigned int i, uint_num, binary, rem;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' || *b != '1')
			return (0);
		b++;
	}

	binary = atoi(b);

	for (i = 0; binary != 0; ++i)
	{
		rem = binary % 10;
		binary = binary / 10;
		uint_num = uint_num + (rem) * (pow(2, i));
	}
	return (uint_num);
}
