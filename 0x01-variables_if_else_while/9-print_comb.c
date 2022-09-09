#include <stdio.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 48;
	int count = 0;

	while (num < 58)
	{
		putchar(num);
		while (count < 9)
		{
			putchar(' ');
			putchar(',');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
