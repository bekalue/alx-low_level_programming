#include "main.h"
/**
 * cap_string - change all strings to title
 * @str: pointer
 *
 * Return: str
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		/*check first character is lowercase alphabet*/
		if (i == 0)
		{
			if ((str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32; /*subtract 32 to make it capital*/
			continue; /*continue to the loop*/
		}
		if (str[i] == ' ')/*check space*/
		{
			/*if space is found, check next character*/
			++i;
			/*check next character is lowercase alphabet*/
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32; /*subtract 32 to make it capital*/
				continue; /*continue to the loop*/
			}
		}
		else
		{
			/*all other uppercase characters should be in lowercase*/
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32; /*subtract 32 to make it small/lowercase*/
		}
	}
	return (str);
}
