#include "main.h"
/**
 * main - prints all arguments it receives.
 * @argc: argument count
 * @argv: array of argument strings
 * Return: success (0)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
