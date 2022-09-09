#include <stdio.h>
#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;
	int k;

	n = 48;
	while (n < 56)
	{
		m = 48;
		while (m < 57)
		{
			k = 48;
			while (k < 58)
			{
				if (n < m && m < k)
				{
					putchar(n);
					putchar(m);
					putchar(k);
					if (!(n == 55 && m == 56 && 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}


