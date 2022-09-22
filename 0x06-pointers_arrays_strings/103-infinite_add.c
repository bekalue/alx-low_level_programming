#include "main.h"
#include <stdio.h>

/**
 * infinite_add - add two numbers
 * @n1: first number
 * @n2: second number
 * @r: result
 * @size_r: buffer of the result
 *
 * Return: the sum of the numbers
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, a, b, plusT, size;

	while (n1[i] != '\0')
	{
		i++;
	}
	printf("the value of i is this: %d\n", i);
	for (; i >= 0; i--)
	{
		a = n1[i] - 48;
		b = n2[i] - 48;
		if (a + b >= 10)
		{
			printf("enter the if\n");
			r[i] = (a + b) % 10;
			plusT = 1;
		}
		else
		{
			if (a + b + plusT >= 10)
			{
				printf("enter the if below\n");
				r[i] = (a + b + plusT) % 10;
				plusT = 1;
			}
			else
			{
				printf("enter the else if below\n");
				r[i] = (a + b + plusT) % 10;
				plusT = 0;
			}
		}
		if (n1[i] == 1 && plusT == 1)
			size++;
		size++;
	}
	if (size > size_r)
	{
		*r = '0';
		return (r);
	}
	r[size] = '\0';
	printf("the value of i after the for: %d\n", i);
	printf("the value of size is this: %d\n", size);
	printf("the value of r is this: %s\n", r);
	return (r);
}
