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

	while (num < 58)
	{
		putchar(num);
		putchar(' ');
		putchar(',');
		num++;
	}
	putchar('\n');
	return (0);
}
