#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers = 0;

	while (numbers < 10)
	{
		printf("%d", numbers);
		numbers++;
	}
	printf("\n");
	return (0);
}
