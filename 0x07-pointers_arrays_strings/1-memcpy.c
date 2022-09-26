#include "main.h"
/**
  * _memcpy - Copy a string
  * @dest: The destination value
  * @src: The source value
  * @n: The copy limit
  *
  * Return: char value
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j;

	j = 0;
	while (n > 0)
	{
		dest[j] = src[j];
		j++;
		n--;
	}
	return (dest);
}
