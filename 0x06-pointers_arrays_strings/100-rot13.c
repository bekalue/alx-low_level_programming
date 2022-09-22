#include "main.h"
/**
 * rot13 - encodes charcter
 * @str: pointer points to a recieved string
 * Return: str
 */
char *rot13(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		if ((str[index] >= 'a' || str[index] >= 'A') &&
		(str[index] <= 'm' || str[index] <= 'M'))
			str[index] += 13;
		else if ((str[index] >= 'n' || str[index] >= 'N') &&
		(str[index] <= 'z' || str[index] <= 'Z'))
			str[index] -= 13;
	}

	return (str);
}
