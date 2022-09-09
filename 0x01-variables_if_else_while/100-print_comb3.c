#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48;

	while (n < 57)
	{
		int m = 48;

		while (m < 58)
		{
			if (n < m)
			{
				putchar(n);
				putchar(m);
				if (!(n == 56 && m == 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
