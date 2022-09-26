#include "main.h"
/**
 * _memset -  fills the first n bytes of the memory area
 * pointed to by s with the constant byte b.
 * @s: bytes of the memory area.
 * @b: constant byte to replace.
 * @n: number of bytes to be replaced.
 * Return: s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		*s = b;
		s++;
		--n;
	}
	return (s);
}
