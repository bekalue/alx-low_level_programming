#include "main.h"

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
 * main - adds multiple numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int sum = 0, i;

	if (argc < 2)
	{
		printf("%d\n", sum);
		return (0);
	}

	for (i = 1; i < argc - 1; i++)
	{
		if (!(_atoi(argv[i]) >= '0' && _atoi(argv[i]) <= '9'))
		{
			printf("Error\n");
			return (1);
		}
		sum += _atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
