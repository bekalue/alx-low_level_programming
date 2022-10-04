#include "main.h"
/**
 * *argstostr - concatenates all the arguments of your program..
 * @ac: argument count.
 * @av: argument vector.
 * Return: str.
 */
char *argstostr(int ac, char **av)
{
	int n;
	int length = 1;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return ('\0');
	}
	for (n = 0; n < ac; n++)
	{
		length += (strlen(av[n]) + 1);
	}
	str = malloc(length * sizeof(char));
	str[0] = '\0';
	for (n = 0; n < ac; n++)
	{
		strcat(str, av[n]);
	}
	return (str);
	free(str);
}
