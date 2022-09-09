#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int num = 48; num < 58; num++)
	{
		for (int num2 = 48; num2 < 58; num2++)
		{
			putchar(num);
			putchar(num2);
			if (!(num == 57 && num == 57))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
