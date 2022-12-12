#include "main.h"

/**
 * _islower - cheaks if the character is lowercase
 * @c: the charater to be determined if it is lower or not
 * Return: 1 if losercase or 0 if not
 */
int _islower(int c)
{
	int alphabet;

	int count;

	count = 0;

	for (alphabet = 97; alphabet <= 122; alphabet++)
	{
		if (c == alphabet)
		{
			count++;
			break;
		}
	}
	if (count == 0)
		return (0);
	else
		return (1);
}
