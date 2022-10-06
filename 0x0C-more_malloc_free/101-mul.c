#include "main.h"
#include <string.h>
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
 * main - calculates the multiple of two numbers fro commandline.
 * @argc: number of argument
 * @argv: array of argument.
 * Return: success(0) or exit if it fails.
 */

int main(int argc, char *argv[])
{
	int i, j;
	int *num1, *num2, *mul;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	num1 = malloc(strlen(_atoi(a[1])));
	if (num1 == NULL)
	{
		free(num1);
		return (num1);
	}
	_memcpy(num1, _atoi(argv[1]), strlen(_atoi(a[1])));

	num2 = malloc(strlen(_atoi(a[2])));
	if (num2 == NULL)
	{
		free(num2);
		return (NULL);
	}
	_memcpy(num2, _atoi(argv[2]), strlen(_atoi(a[2])));
	mul = malloc(strlen(_atoi(a[2])) * strlen(_atoi(a[1])));
	mul = num1 * num2;

	printf("%d\n", mul);
	return (0);
}
