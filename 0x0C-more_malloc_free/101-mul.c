#include "main.h"
#include <string.h>
/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 * Return: The integer value of the converted string.
*/
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;

	} while (*s++);

	return (num * sign);
}
/**
 * mymalloc - allocates memory and copies ptr value on that address.
 * @ptr: a string thats going to be copied.
 * @size: size of memory to be allocated.
 * Return: a new allocated address.
 */
void *mymalloc(void *ptr, unsigned int size)
{
	void *s;

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	s = malloc(size);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	s = ptr;
	return (s);
}
/**
 * main - calculates the multiple of two numbers fro commandline.
 * @argc: number of argument
 * @argv: array of argument.
 * Return: success(0) or exit if it fails.
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int i, j, num1, num2, mul;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	s1 = mymalloc(argv[1], strlen(argv[1]));
	s2 = mymalloc(argv[2], strlen(argv[2]));
	num1 = _atoi(s1);
	num2 = _atoi(s2);

	mul = num1 * num2;

	printf("%d\n", mul);
	for (i = 0; i < argc; i++)
	{
		free(argv[argc]);
	}
	free(argv);
	return (0);
}
