#include "main.h"
/**
* get_endianness - checks the endianness of a computer
* Return: 1 if  little endian
*/

int get_endianness(void)
{
	int i;

	i = 2;

	if (i & 1)
		return (0);
	else
		return (1);
}
